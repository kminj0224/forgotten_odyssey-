/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001600ac  Symbol: sharedDispatcher */

/* cocos2d::CCIMEDispatcher::sharedDispatcher() */

int cocos2d::CCIMEDispatcher::sharedDispatcher(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = DAT_001600ec;
  piVar3 = (int *)(DAT_001600ec + 0x1600b4);
  if ((-1 < *piVar3 << 0x1f) && (iVar2 = __cxa_guard_acquire(piVar3), iVar2 != 0)) {
    CCIMEDispatcher((CCIMEDispatcher *)(iVar1 + 0x1600b8));
    __cxa_guard_release(piVar3);
    FUN_00201240((CCIMEDispatcher *)(iVar1 + 0x1600b8),*(undefined4 *)(DAT_001600f0 + 0x1600da),
                 *(undefined4 *)(DAT_001600f4 + 0x1600dc));
  }
  return (int)&DAT_001600ec + DAT_001600f8;
}


