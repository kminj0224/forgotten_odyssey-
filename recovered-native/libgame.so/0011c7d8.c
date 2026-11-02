/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011c7d8  Symbol: noticeWithGamoeOver */

/* New_Notice::noticeWithGamoeOver(int, int) */

void New_Notice::noticeWithGamoeOver(int param_1,int param_2)

{
  char *pcVar1;
  CCSpriteFrameCache *this;
  undefined8 uVar2;
  undefined4 in_stack_ffffffc0;
  undefined uVar3;
  char *local_28;
  undefined auStack_24 [4];
  CCPoint local_20;
  CCPoint local_1c;
  char *local_18;
  int local_14;
  
  uVar3 = (undefined)((uint)in_stack_ffffffc0 >> 0x18);
  this = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(this,(char *)(DAT_0011c878 + 0x11c7ea));
  local_28 = (char *)(*(int *)(DAT_0011c87c + 0x11c7f6) + 0xc);
  FUN_001ed9dc(&local_28,DAT_0011c880 + 0x11c7fa);
  FUN_001ee80c(auStack_24,&local_28);
  BaceImg(param_1);
  uVar2 = FUN_001ed6b8(auStack_24);
  pcVar1 = local_28;
  uVar2 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_20,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  vDrawString((CCNode *)param_1,pcVar1,local_20,local_1c,local_18,local_14,DAT_0011c88c + 0x11c846,
              0xb,CONCAT22((short)(CONCAT13(uVar3,0xff0000) >> 0x10),0xffff));
  noticeOKorNO();
  *(int *)(param_1 + 0x114) = param_2;
  FUN_001ed6b8(&local_28);
  return;
}


