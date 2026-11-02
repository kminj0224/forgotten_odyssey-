/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015dbcc  Symbol: sharedUserDefault */

/* cocos2d::CCUserDefault::sharedUserDefault() */

int cocos2d::CCUserDefault::sharedUserDefault(void)

{
  int iVar1;
  CCUserDefault *this;
  CCUserDefault **ppCVar2;
  
  initXMLFilePath();
  iVar1 = isXMLFileExist();
  if ((iVar1 != 0) || (iVar1 = createXMLFile(), iVar1 != 0)) {
    ppCVar2 = *(CCUserDefault ***)(DAT_0015dc10 + 0x15dc02);
    if (*ppCVar2 == (CCUserDefault *)0x0) {
      this = (CCUserDefault *)operator_new(1);
      CCUserDefault(this);
      *ppCVar2 = this;
    }
    iVar1 = **(int **)(DAT_0015dc0c + 0x15dbf8);
  }
  return iVar1;
}


