/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c9e7c  Symbol: SetNumberFont */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000c9e86) */
/* WARNING: Removing unreachable block (ram,0x000c9e86) */
/* N_Draw_Number::SetNumberFont(int) */

void __thiscall N_Draw_Number::SetNumberFont(N_Draw_Number *this,int param_1)

{
  CCTextureCache *this_00;
  undefined4 uVar1;
  char *pcVar2;
  
  switch(param_1) {
  case 0:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c9f44 + 0xc9ea4);
    break;
  case 1:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c9f48 + 0xc9eae);
    break;
  case 2:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c9f4c + 0xc9eb8);
    break;
  case 3:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c9f50 + 0xc9ec2);
    break;
  case 4:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c9f54 + 0xc9ecc);
    break;
  case 5:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c9f58 + 0xc9ed6);
    break;
  case 6:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c9f5c + 0xc9ee0);
    break;
  case 7:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c9f60 + 0xc9eea);
    break;
  case 8:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c9f64 + 0xc9ef4);
    break;
  case 9:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c9f68 + 0xc9efe);
    break;
  case 10:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c9f6c + 0xc9f08);
    break;
  case 0xb:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c9f70 + 0xc9f12);
    break;
  case 0xc:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c9f74 + 0xc9f1c);
    break;
  case 0xd:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c9f78 + 0xc9f26);
    break;
  case 0xe:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c9f7c + 0xc9f30);
    break;
  case 0xf:
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    pcVar2 = (char *)(DAT_000c9f80 + 0xc9f3a);
    break;
  default:
    goto switchD_000c9e86_caseD_10;
  }
  uVar1 = cocos2d::CCTextureCache::addImage(this_00,pcVar2);
  *(undefined4 *)(this + 0x114) = uVar1;
switchD_000c9e86_caseD_10:
  return;
}


