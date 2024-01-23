```c
int getMinerPowerStatus(int hostIP, int port) {
    char parsedResponse;
    int buffer1;
    int buffer2;
    int buffer3;
    int logBuffer;
    int result;
    char responseChunk1;
    char responseChunk2;
    char endpointUrl;
    char powerStatusValue;
    int jsonParseErrorCode;
    memset(&endpointUrl, 0, 128);
    memset(&powerStatusValue, 0, 32);
    int getStatusValueResult = getPowerStatusValue((char*)&powerStatusValue);
    if(getStatusValueResult == 0) {
        sprintf((char*)&endpointUrl, "http://%s:%d/power/%s", hostIP, port, &powerStatusValue);
        void* httpRequestResult = performHttpGetRequest((char*)&endpointUrl);
        if(httpRequestResult != 0) {
            void* jsonResponse = parseJsonResponse((int)httpRequestResult, 0, &jsonParseErrorCode);
            if(jsonResponse == 0) {
                result = -1;
                if(logLevel > 3) {
                    snprintf(&logBuffer, 0x800, "JSON decode failed(%d): %s", jsonParseErrorCode, &responseChunk2);
                    logMessage(3, &logBuffer, 0);
                }
            }
            else {
                uint32_t* powerStatus = getJsonValue((int*)jsonResponse, "power");
                if(powerStatus == 0) {
                    result = -1;
                    if(logLevel > 3) {
                        logBuffer = 1780510574;
                        buffer3 = 544108403;
                        buffer2 = 0x656a626f;
                        buffer1 = 1885041763;
                        *(int*)&responseChunk1 = 1919252335;
                        *(int*)&parsedResponse = 1868963933;
                        int unknownBuffer = 174354037;
                        char endChar = 0;
                        logMessage(3, &logBuffer, 0);
                    }
                }
                else {
                    result = extractPowerValue((int*)powerStatus);
                }
                if(*(int*)((int)jsonResponse + 4) != -1) {
                    DataMemoryBarrier();
                    int refCount = *(int*)((int)jsonResponse + 4) - SOCK_STREAM;
                    --*(int*)((int)jsonResponse + 4);
                    if(refCount == 0) {
                        freeJsonResponse(jsonResponse);
                    }
                }
            }
            free(httpRequestResult);
            return result;
        }
        if(logLevel > 3) {
            logBuffer = 1886680168;
            buffer3 = 0x74656720;
            buffer2 = 1767990816;
            buffer1 = 0xa64656c;
            responseChunk1 = 0;
            logMessage(3, &logBuffer, 0);
            return -1;
        }
    }
    else if(logLevel > 3) {
        logBuffer = 0x20746567;
        buffer3 = 1633906540;
        buffer2 = 1885937772;
        buffer1 = 1767990816;
        *(int*)&responseChunk1 = 0xa64656c;
        parsedResponse = 0;
        logMessage(3, &logBuffer, 0);
    }
    return -1;
}
```