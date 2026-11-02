/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011c890  Symbol: noticeWithType */

/* New_Notice::noticeWithType(char const*, int, int) */

void __thiscall New_Notice::noticeWithType(New_Notice *this,char *param_1,int param_2,int param_3)

{
  char *pcVar1;
  CCSpriteFrameCache *this_00;
  int *piVar2;
  _ccColor3B _Var3;
  float fVar4;
  float fVar6;
  undefined4 in_stack_ffffff90;
  undefined uVar8;
  int iVar7;
  char *local_50;
  undefined auStack_4c [4];
  CCPoint local_48;
  CCPoint local_44;
  char *local_40;
  int local_3c;
  CCPoint local_38;
  CCPoint local_34;
  char *local_30;
  int local_2c;
  CCPoint local_28;
  CCPoint local_24;
  char *local_20;
  int local_1c;
  undefined8 uVar5;
  
  uVar8 = (undefined)((uint)in_stack_ffffff90 >> 0x18);
  this_00 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(this_00,(char *)(DAT_0011ca14 + 0x11c8a6));
  local_50 = (char *)(*(int *)(DAT_0011ca18 + 0x11c8ae) + 0xc);
  if (param_1 != (char *)0x0) {
    FUN_001ed9dc(&local_50,param_1);
  }
  FUN_001ee80c(auStack_4c,&local_50);
  BaceImg((basic_string)this);
  uVar5 = FUN_001ed6b8(auStack_4c);
  pcVar1 = local_50;
  fVar6 = (float)((ulonglong)uVar5 >> 0x20);
  fVar4 = (float)uVar5;
  if (param_2 == 3) {
    uVar5 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_48,fVar4,fVar6);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    _Var3 = DAT_0011ca24 + 0x11c90a;
    iVar7 = CONCAT22((short)(CONCAT13(uVar8,0xff0000) >> 0x10),0xffff);
  }
  else if (((((param_2 == 4) || (param_2 == 0x1a)) || (param_2 == 6)) ||
           ((param_2 == 5 || (param_2 + DAT_0011ca28 == 0)))) || (param_2 == 7)) {
    uVar5 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,fVar4,fVar6);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    _Var3 = DAT_0011ca30 + 0x11c972;
    iVar7 = CONCAT22((short)(CONCAT13(uVar8,0xff0000) >> 0x10),0xffff);
    local_48 = local_38;
    local_44 = local_34;
    local_40 = local_30;
    local_3c = local_2c;
  }
  else {
    uVar5 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,fVar4,fVar6);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    _Var3 = DAT_0011ca38 + 0x11c9be;
    iVar7 = CONCAT22((short)(CONCAT13(uVar8,0xff0000) >> 0x10),0xffff);
    local_48 = local_28;
    local_44 = local_24;
    local_40 = local_20;
    local_3c = local_1c;
  }
  vDrawString((CCNode *)this,pcVar1,local_48,local_44,local_40,local_3c,_Var3,0xb,iVar7);
  if ((param_2 == 0x1a) || (param_2 == 0x18)) {
    piVar2 = (int *)(**(code **)(*(int *)this + 0x90))(this);
    (**(code **)(*piVar2 + 0x114))(piVar2,0);
  }
  if (param_3 == 0) {
    noticeOK();
  }
  else {
    noticeOKorNO();
  }
  *(int *)(this + 0x114) = param_2;
  FUN_001ed6b8(&local_50);
  return;
}


