```c
// Function prototype updated for readability
int UpdateFirmwareVersion(int fileDescriptor, int firmwareInfo);

// Function to update the firmware version on the Bitmain Antminer
int UpdateFirmwareVersion(int fileDescriptor, int firmwareInfo) {
  int updateStatus;
  unsigned char firmwareVersion[8];
  
  // Call the function to get the current firmware info
  updateStatus = GetFirmwareInfo(firmwareInfo, firmwareVersion);
  // Check if getting the firmware info was successful
  if (updateStatus == 0) {
    // Call the function to set the new firmware version
    updateStatus = SetFirmwareVersion(fileDescriptor, firmwareVersion, 5);
  } else {
    // Return an error code if getting the firmware info failed
    updateStatus = -1;
  }
  // Return the status of the firmware update
  return updateStatus;
}
```