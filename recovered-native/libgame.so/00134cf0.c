/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00134cf0  Symbol: sharedConfiguration */

/* cocos2d::CCConfiguration::sharedConfiguration() */

int cocos2d::CCConfiguration::sharedConfiguration(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = DAT_00134d44;
  piVar3 = (int *)(DAT_00134d44 + 0x134cf8);
  if ((-1 < *piVar3 << 0x1f) && (iVar2 = __cxa_guard_acquire(piVar3), iVar2 != 0)) {
    CCConfiguration((CCConfiguration *)(iVar1 + 0x134cfc));
    __cxa_guard_release(piVar3);
    FUN_00201240((CCConfiguration *)(iVar1 + 0x134cfc),*(undefined4 *)(DAT_00134d48 + 0x134d1e),
                 *(undefined4 *)(DAT_00134d4c + 0x134d20));
  }
  iVar1 = DAT_00134d50;
  if (*(char *)((int)&DAT_00134d50 + DAT_00134d50) == '\0') {
    init((CCConfiguration *)(DAT_00134d50 + 0x134d30));
    *(undefined *)((int)&DAT_00134d50 + iVar1) = 1;
  }
  return DAT_00134d54 + 0x134d46;
}


