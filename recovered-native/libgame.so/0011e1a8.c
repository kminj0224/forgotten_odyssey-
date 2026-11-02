/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011e1a8  Symbol: noticeWithTypeItem */

/* New_Notice::noticeWithTypeItem(int, char const*, int, int, int, int) */

void __thiscall
New_Notice::noticeWithTypeItem
          (New_Notice *this,int param_1,char *param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  CCSpriteFrameCache *pCVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float extraout_s0;
  undefined8 uVar5;
  float extraout_s1;
  undefined4 in_stack_fffffeb0;
  undefined uVar7;
  int local_140;
  int local_128;
  int local_124;
  int local_120;
  undefined auStack_11c [4];
  undefined auStack_118 [4];
  int local_114;
  undefined auStack_110 [4];
  undefined auStack_10c [4];
  undefined auStack_108 [4];
  undefined auStack_104 [4];
  CCPoint local_100;
  CCPoint local_fc;
  int local_f8;
  int local_f4;
  CCPoint local_f0;
  int local_ec;
  CCPoint local_e8;
  CCPoint local_e4;
  char *local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0 [4];
  int local_c0;
  int local_bc;
  int local_a8 [4];
  int local_98;
  int local_94;
  char acStack_80 [100];
  int local_1c;
  float fVar6;
  
  uVar7 = (undefined)((uint)in_stack_fffffeb0 >> 0x18);
  iVar4 = DAT_0011e510 + 0x11e1b8;
  piVar3 = *(int **)(iVar4 + DAT_0011e514);
  local_1c = *piVar3;
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_0011e518 + 0x11e1cc));
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  uVar5 = cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile
                    (pCVar1,(char *)(DAT_0011e51c + 0x11e1d8));
  fVar6 = (float)((ulonglong)uVar5 >> 0x20);
  iVar2 = *(int *)(iVar4 + DAT_0011e520);
  local_128 = iVar2 + 0xc;
  *(int *)(this + 0x11c) = param_6;
  *(int *)(this + 0x118) = param_3;
  *(int *)(this + 300) = param_5;
  local_124 = local_128;
  local_120 = local_128;
  if ((param_1 == 0x13) || (param_1 == 10)) {
    if (param_3 == -1) {
      cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)this,true);
      goto LAB_0011e4ee;
    }
    uVar5 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_100,(float)uVar5,fVar6);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_f8,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    vDrawFrame((CCNode *)this,(char *)(DAT_0011e52c + 0x11e23c),local_100,local_fc,local_f8,local_f4
              );
    if (param_5 == 0x12) {
      Reinforcement_Item_Text_Draw
                (this,(void *)(**(int **)(iVar4 + DAT_0011e534) +
                              param_3 * 0x14 + **(int **)(iVar4 + DAT_0011e530) * 2000 +
                              DAT_0011e538));
      local_140 = 0;
    }
    else {
      local_140 = 0;
      if (param_5 == 0x13) {
        Reinforcement_Item_Text_Draw
                  (this,(void *)(**(int **)(iVar4 + DAT_0011e534) +
                                param_3 * 0x14 + **(int **)(iVar4 + DAT_0011e53c) * 0x50 +
                                **(int **)(iVar4 + DAT_0011e530) * 0x2d0 + DAT_0011e540));
      }
    }
  }
  else {
    local_140 = 0;
    if (param_1 == 0xb) {
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_f0,(float)uVar5,fVar6);
      vDrawImage((CCNode *)this,(char *)(DAT_0011e544 + 0x11e2d2),local_f0,local_ec,2);
      Resurrection_Img_Lode();
    }
    else if (param_1 == 9) {
      memset(acStack_80,0,100);
      memset(local_d0,0,0x28);
      local_d0[0] = DAT_0011e548 + 0x11e306;
      local_d0[1] = DAT_0011e54c + 0x11e310;
      local_d0[2] = DAT_0011e550 + 0x11e316;
      local_d0[3] = DAT_0011e554 + 0x11e31c;
      local_c0 = DAT_0011e558 + 0x11e322;
      local_bc = DAT_0011e55c + 0x11e328;
      memset(local_a8,0,0x28);
      local_a8[0] = DAT_0011e560 + 0x11e334;
      local_a8[1] = DAT_0011e568 + 0x11e33c;
      local_a8[2] = DAT_0011e56c + 0x11e342;
      local_a8[3] = DAT_0011e570 + 0x11e348;
      local_98 = DAT_0011e574 + 0x11e34e;
      local_94 = DAT_0011e578 + 0x11e354;
      sprintf(acStack_80,(char *)(DAT_0011e564 + 0x11e33a),local_d0[param_6],DAT_0011e57c + 0x11e366
              ,local_a8[param_6],DAT_0011e580 + 0x11e368);
      uVar5 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_e8,extraout_s0,extraout_s1);
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_e0,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20))
      ;
      vDrawString((CCNode *)this,acStack_80,local_e8,local_e4,local_e0,local_dc,
                  DAT_0011e58c + 0x11e39e,0xb,
                  CONCAT22((short)(CONCAT13(uVar7,0xff0000) >> 0x10),0xffff));
    }
    else {
      notice_item_store_type_Init((int)auStack_11c);
      FUN_001ee874(&local_128,auStack_11c);
      FUN_001ed6b8(auStack_11c);
      if (param_2 == (char *)0x0) {
        get_Item_Name((int)auStack_118,(int)this);
        FUN_001ee874(&local_124,auStack_118);
        FUN_001ed6b8(auStack_118);
      }
      else {
        FUN_001ed9dc(&local_124,param_2);
      }
      local_140 = *(int *)(this + 0x120);
      local_114 = iVar2 + 0xc;
      FUN_001ee274(&local_114,*(int *)(local_124 + -0xc) + 1);
      FUN_001ee484(&local_114,DAT_0011e590 + 0x11e424,1);
      FUN_001ee6cc(&local_114,&local_124);
      FUN_001ee80c(auStack_110,&local_114);
      FUN_001ee590(auStack_110,DAT_0011e594 + 0x11e43e);
      FUN_001ee874(&local_124,auStack_110);
      FUN_001ed6b8(auStack_110);
      FUN_001ed6b8(&local_114);
      FUN_001ee80c(auStack_10c,&local_124);
      FUN_001ee6cc(auStack_10c,&local_128);
      FUN_001ee874(&local_120,auStack_10c);
      uVar5 = FUN_001ed6b8(auStack_10c);
      if (param_1 != 0x16) {
        uVar5 = Set_Money(this,param_5);
      }
      if (param_6 != 0) {
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&local_d8,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
        Draw_Item((CCNode *)this,(CCPoint)this,local_d8,local_d4,param_6,*(int *)(this + 0x120),
                  *(int *)(this + 0x124));
      }
    }
  }
  FUN_001ee80c(auStack_108,&local_124);
  FUN_001ee80c(auStack_104,&local_128);
  BaceImg(this,(basic_string)auStack_108,(basic_string)auStack_104,local_140);
  FUN_001ed6b8(auStack_104);
  FUN_001ed6b8(auStack_108);
  if (param_4 == 0) {
    noticeOK();
  }
  else {
    noticeOKorNO();
  }
  *(int *)(this + 0x114) = param_1;
LAB_0011e4ee:
  FUN_001ed6b8(&local_120);
  FUN_001ed6b8(&local_124);
  FUN_001ed6b8(&local_128);
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


