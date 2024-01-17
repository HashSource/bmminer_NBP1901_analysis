```c
char *FindNextNonDashArgument(uint32_t socketFd, uint32_t readTimeout)
{
  char *currentArgPtr;
  uint32_t readConfig[2];
  
  // Setting up the configuration to read a single character
  readConfig[0] = 1;
  currentArgPtr = (char *)ReadSocketData(socketFd, readTimeout, readConfig);
  
  // Continue reading one character at a time from the socket
  while (true) {
    if (currentArgPtr == NULL) {
      // If we've reached the end of the data without finding a non-dash argument, return NULL.
      return NULL;
    }
    
    // If the current character is not a dash, we found the beginning of the next argument
    if (*currentArgPtr != '-') break;
    
    // Otherwise, skip over the dash and read the next character
    currentArgPtr = (char *)ReadSocketData(currentArgPtr, readTimeout, readConfig);
  }
  
  // Return a pointer to the non-dash argument
  return currentArgPtr;
}
```