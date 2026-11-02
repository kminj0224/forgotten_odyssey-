/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015db48  Symbol: createXMLFile */

/* cocos2d::CCUserDefault::createXMLFile() */

int cocos2d::CCUserDefault::createXMLFile(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0018a24c(DAT_0015db8c + 0x15db50);
  iVar2 = iVar1;
  if (iVar1 != 0) {
    iVar2 = FUN_0018a130(0,DAT_0015db90 + 0x15db60);
    if (iVar2 != 0) {
      FUN_0018c3bc(iVar1,iVar2);
      iVar2 = 1;
      FUN_001a1490(**(undefined4 **)(DAT_0015db94 + 0x15db78),iVar1);
    }
    FUN_0018ba54(iVar1);
  }
  return iVar2;
}


