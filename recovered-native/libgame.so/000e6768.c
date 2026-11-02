/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e6768  Symbol: Lode_Image */

/* MarketLayer::Lode_Image() */

void MarketLayer::Lode_Image(void)

{
  CCSpriteFrameCache *this;
  char *__format;
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  char acStack_34 [32];
  int local_14;
  
  iVar2 = 0;
  piVar3 = *(int **)(DAT_000e682c + 0xe6774);
  local_14 = *piVar3;
  do {
    memset(acStack_34,0,0x1e);
    if (iVar2 == 0) {
      uVar1 = 0x6e;
      __format = (char *)(DAT_000e6830 + 0xe6790);
    }
    else if (iVar2 == 1) {
      uVar1 = 0x78;
      __format = (char *)(DAT_000e6834 + 0xe679e);
    }
    else if (iVar2 == 2) {
      uVar1 = 0x82;
      __format = (char *)(DAT_000e6838 + 0xe67ac);
    }
    else if (iVar2 == 3) {
      uVar1 = 0x96;
      __format = (char *)(DAT_000e683c + 0xe67ba);
    }
    else if (iVar2 == 4) {
      uVar1 = 0xa0;
      __format = (char *)(DAT_000e6840 + 0xe67c8);
    }
    else if (iVar2 == 5) {
      uVar1 = 0xaa;
      __format = (char *)(DAT_000e6844 + 0xe67d6);
    }
    else if (iVar2 == 6) {
      uVar1 = 0xb4;
      __format = (char *)(DAT_000e6848 + 0xe67e4);
    }
    else if (iVar2 == 7) {
      uVar1 = 0xe6;
      __format = (char *)(DAT_000e684c + 0xe67f2);
    }
    else {
      __format = (char *)(DAT_000e6850 + 0xe67fc);
      uVar1 = 0x104;
    }
    sprintf(acStack_34,__format,uVar1,uVar1);
    this = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(this,acStack_34);
    *(undefined *)(*(int *)(DAT_000e6854 + 0xe6814) + iVar2) = 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 9);
  if (local_14 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


