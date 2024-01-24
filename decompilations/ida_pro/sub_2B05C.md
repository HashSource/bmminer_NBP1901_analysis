```c
int __fastcall parseJobBuffer(uint32_t *jobBufDst, int jobBufSrc, int jobBufLen)
{
  size_t merkleSize; // r7
  size_t merkleDataOffset; // r4
  void *merkleRootDst; // r0
  void *copiedMerkleRoot; // r3
  int merkleCount; // r0
  uint32_t **merkleBinArray; // r0
  int merkleBinCount; // r3
  size_t localMerkleOffset; // r10
  uint32_t **localMerkleBinPtr; // r8
  size_t nextLocalMerkleOffset; // r7
  int *srcMerkleChart; // r4
  int merkleIndex; // r5
  uint32_t *localMerkleBin; // r3
  int srcMerkleData; // r12
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r0
  int v23; // r1
  int v24; // r2
  char *coinbase1; // r4
  size_t coinbase1Len; // r0
  size_t nextOffset; // r10
  char *coinbase2; // r4
  size_t finalOffset; // r10
  uint32_t *versionAndTime; // r2
  int nBits; // r1
  int *nonceAndNTime; // r9
  size_t parsedDataLen; // r10
  int result; // r0
  int nTime; // r1
  char logMsgBuf[2088]; // [sp+8h] [bp-828h] BYREF

  memcpy(jobBufDst, (const void *)jobBufSrc, 0x738u);
  merkleSize = jobBufDst[393];
  merkleDataOffset = merkleSize + 1848;
  merkleRootDst = calloc(1u, merkleSize);
  copiedMerkleRoot = memcpy(merkleRootDst, (const void *)(jobBufSrc + 1848), merkleSize);
  merkleCount = jobBufDst[427];
  jobBufDst[392] = copiedMerkleRoot;
  merkleBinArray = allocateMerkleBins(4 * merkleCount + 1, "bmminer.c", "parse_job_buf", 2190);
  merkleBinCount = jobBufDst[427];
  jobBufDst[169] = merkleBinArray;
  if ( merkleBinCount > 0 )
  {
    localMerkleBinPtr = merkleBinArray;
    nextLocalMerkleOffset = merkleSize + 1880;
    srcMerkleChart = (int *)(jobBufSrc + merkleDataOffset);
    merkleIndex = 0;
    while ( 1 )
    {
      localMerkleBinPtr[merkleIndex] = allocateMerkleBin(0x20u, "bmminer.c", "parse_job_buf", 2193);
      localMerkleOffset = nextLocalMerkleOffset + 32 * merkleIndex;
      localMerkleBin = jobBufDst[169][merkleIndex];
      if ( !localMerkleBin )
      {
        strcpy(logMsgBuf, "Failed to malloc local merkle_bin");
        logMessage(3, logMsgBuf, 1);
        localMerkleBin = jobBufDst[169][merkleIndex];
      }
      srcMerkleData = *srcMerkleChart;
      ++merkleIndex;
      v19 = srcMerkleChart[1];
      srcMerkleChart += 8;
      v20 = *(srcMerkleChart - 6);
      v21 = *(srcMerkleChart - 5);
      localMerkleBin[0] = srcMerkleData;
      localMerkleBin[1] = v19;
      localMerkleBin[2] = v20;
      localMerkleBin[3] = v21;
      v22 = *(srcMerkleChart - 3);
      v23 = *(srcMerkleChart - 2);
      v24 = *(srcMerkleChart - 1);
      localMerkleBin[4] = *(srcMerkleChart - 4);
      localMerkleBin[5] = v22;
      localMerkleBin[6] = v23;
      localMerkleBin[7] = v24;
      if ( jobBufDst[427] <= merkleIndex )
        break;
      localMerkleBinPtr = (uint32_t **)jobBufDst[169];
    }
  }
  else
  {
    localMerkleOffset = merkleSize + 1848;
  }
  coinbase1 = _strdup((const char *)(jobBufSrc + localMerkleOffset));
  coinbase1Len = strlen(coinbase1);
  jobBufDst[168] = coinbase1;
  nextOffset = coinbase1Len + 1 + localMerkleOffset;
  coinbase2 = _strdup((const char *)(jobBufSrc + nextOffset));
  finalOffset = nextOffset + strlen(coinbase2);
  jobBufDst[153] = coinbase2;
  versionAndTime = (uint32_t *)(jobBufSrc + finalOffset + 1);
  nBits = versionAndTime[1];
  nonceAndNTime = (int *)(jobBufSrc + finalOffset + 9);
  parsedDataLen = finalOffset + 17;
  miningVersionTime = *versionAndTime;
  miningBits = nBits;
  result = *nonceAndNTime;
  nTime = nonceAndNTime[1];
  miningNonce = *nonceAndNTime;
  miningNTime = nTime;
  if ( logEnabled && (loggingDebug || loggingVerbose || loggingThreshold > 6) )
  {
    snprintf(logMsgBuf, 0x800u, "parse job buf len:%d\n", parsedDataLen);
    result = logMessage(7, logMsgBuf, 0);
  }
  if ( parsedDataLen != jobBufLen )
  {
    strcpy(logMsgBuf, "ERR: data trans/recv unmathced!");
    return logMessage(3, logMsgBuf, 1);
  }
  return result;
}
```