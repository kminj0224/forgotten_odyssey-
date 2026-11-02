/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c8d48  Symbol: SetNumberFont */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000c8d52) */
/* WARNING: Removing unreachable block (ram,0x000c8d52) */
/* Draw_Number::SetNumberFont(int) */

void __thiscall Draw_Number::SetNumberFont(Draw_Number *this,int param_1)

{
  CCTextureCache *this_00;
  undefined4 uVar1;
  char *pcVar2;
  
  switch(param_1) {
  case 0:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c8df8 + 0xc8d6e);
    break;
  case 1:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c8dfc + 0xc8d78);
    break;
  case 2:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c8e00 + 0xc8d82);
    break;
  case 3:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c8e04 + 0xc8d8c);
    break;
  case 4:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c8e08 + 0xc8d96);
    break;
  case 5:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c8e0c + 0xc8da0);
    break;
  case 6:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c8e10 + 0xc8daa);
    break;
  case 7:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c8e14 + 0xc8db4);
    break;
  case 8:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c8e18 + 0xc8dbe);
    break;
  case 9:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c8e1c + 0xc8dc8);
    break;
  case 10:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c8e20 + 0xc8dd2);
    break;
  case 0xb:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c8e24 + 0xc8ddc);
    break;
  case 0xc:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c8e28 + 0xc8de6);
    break;
  case 0xd:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c8e2c + 0xc8df0);
    break;
  default:
    goto switchD_000c8d52_caseD_e;
  }
  uVar1 = cocos2d::CCTextureCache::addImage(this_00,pcVar2);
  *(undefined4 *)(this + 0x114) = uVar1;
switchD_000c8d52_caseD_e:
  return;
}


