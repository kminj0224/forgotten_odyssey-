/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ee2dc  Symbol: Unit_init_layer */

/* Boss::Unit_init_layer(int) */

void __thiscall Boss::Unit_init_layer(Boss *this,int param_1)

{
  CCSpriteFrameCache *pCVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  char *pcVar5;
  bool bVar6;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar7;
  float fVar8;
  CCPoint local_174;
  int local_170;
  CCPoint local_16c;
  int local_168;
  CCPoint local_164;
  int local_160;
  CCPoint local_15c;
  int local_158;
  CCPoint local_154;
  int local_150;
  CCPoint local_14c;
  int local_148;
  CCPoint local_144;
  int local_140;
  CCPoint local_13c;
  int local_138;
  CCPoint local_134;
  int local_130;
  CCPoint local_12c;
  int local_128;
  CCPoint local_124;
  int local_120;
  char acStack_11c [32];
  char acStack_fc [32];
  char acStack_dc [32];
  char acStack_bc [32];
  char acStack_9c [32];
  char acStack_7c [32];
  char acStack_5c [32];
  char acStack_3c [32];
  int local_1c;
  
  iVar2 = DAT_000ee55c + 0xee2ea;
  piVar4 = *(int **)(iVar2 + DAT_000ee560);
  local_1c = *piVar4;
  this[0x110] = (Boss)0x0;
  this[0x111] = (Boss)0x0;
  this[0x120] = (Boss)0x0;
  memset(acStack_11c,0,0x1e);
  memset(acStack_fc,0,0x1e);
  memset(acStack_dc,0,0x1e);
  memset(acStack_bc,0,0x1e);
  memset(acStack_9c,0,0x1e);
  memset(acStack_7c,0,0x1e);
  memset(acStack_5c,0,0x1e);
  memset(acStack_3c,0,0x1e);
  sprintf(acStack_11c,(char *)(DAT_000ee564 + 0xee35c),param_1);
  sprintf(acStack_fc,(char *)(DAT_000ee568 + 0xee368),param_1);
  sprintf(acStack_dc,(char *)(DAT_000ee56c + 0xee374),param_1);
  sprintf(acStack_bc,(char *)(DAT_000ee570 + 0xee380),param_1);
  sprintf(acStack_7c,(char *)(DAT_000ee574 + 0xee38c),param_1);
  sprintf(acStack_5c,(char *)(DAT_000ee578 + 0xee398),param_1);
  sprintf(acStack_9c,(char *)(DAT_000ee57c + 0xee3a4),param_1);
  sprintf(acStack_3c,(char *)(DAT_000ee580 + 0xee3b0),param_1,param_1);
  uVar7 = CONCAT44(extraout_s1,extraout_s0);
  local_174 = *(CCPoint *)(DAT_000ee584 + 0xee3bc);
  local_170 = *(int *)(DAT_000ee584 + 0xee3c0);
  if (param_1 == DAT_000ee588) {
    uVar7 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_14c,extraout_s0,extraout_s1);
    local_174 = local_14c;
    local_170 = local_148;
  }
  else if (param_1 == DAT_000ee588 || param_1 < DAT_000ee588) {
    if (param_1 == DAT_000ee58c) {
LAB_000ee41a:
      uVar7 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_164,extraout_s0,extraout_s1);
      local_174 = local_164;
      local_170 = local_160;
    }
    else if (param_1 == DAT_000ee58c || param_1 < DAT_000ee58c) {
      uVar7 = CONCAT44(extraout_s1,extraout_s0);
      if (param_1 == DAT_000ee590) {
        uVar7 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_16c,extraout_s0,extraout_s1);
        local_174 = local_16c;
        local_170 = local_168;
      }
    }
    else {
      if (param_1 == DAT_000ee594) goto LAB_000ee41a;
      uVar7 = CONCAT44(extraout_s1,extraout_s0);
      if (param_1 == 16000) {
        uVar7 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_15c,extraout_s0,extraout_s1);
        local_174 = local_15c;
        local_170 = local_158;
      }
    }
  }
  else if (param_1 == DAT_000ee598) {
    uVar7 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_144,extraout_s0,extraout_s1);
    local_174 = local_144;
    local_170 = local_140;
  }
  else if (param_1 == DAT_000ee598 || param_1 < DAT_000ee598) {
    uVar7 = CONCAT44(extraout_s1,extraout_s0);
    if (param_1 == DAT_000ee59c) {
      uVar7 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_154,extraout_s0,extraout_s1);
      local_174 = local_154;
      local_170 = local_150;
    }
  }
  else if (param_1 == DAT_000ee5a0) {
    uVar7 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_13c,extraout_s0,extraout_s1);
    local_174 = local_13c;
    local_170 = local_138;
  }
  else if (param_1 == DAT_000ee5a4) {
    uVar7 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_134,extraout_s0,extraout_s1);
    local_174 = local_134;
    local_170 = local_130;
  }
  fVar8 = (float)((ulonglong)uVar7 >> 0x20);
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  if (param_1 == DAT_000ee5cc) {
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_12c,(float)uVar7,fVar8);
    pcVar3 = (char *)(DAT_000ee5d4 + 0xee4de);
    pcVar5 = (char *)(DAT_000ee5d8 + 0xee4e0);
    vDrawScript_Unit(pcVar3,(char *)(DAT_000ee5dc + 0xee4e2),pcVar5,(CCNode *)this,local_12c,
                     local_128,1,1,true,*(bool *)(*(int *)(iVar2 + DAT_000ee5d0) + 5));
    vScript_Unit(pcVar3,(char *)(DAT_000ee5e0 + 0xee4f8),(CCNode *)this,1,1);
    vScript_Unit(pcVar3,(char *)(DAT_000ee5e4 + 0xee508),(CCNode *)this,1,2);
    vScript_Unit(pcVar3,(char *)(DAT_000ee5e8 + 0xee51a),(CCNode *)this,1,3);
    vScript_Unit(pcVar3,(char *)(DAT_000ee5ec + 0xee52c),(CCNode *)this,1,4);
    vScript_Unit(pcVar3,(char *)(DAT_000ee5f0 + 0xee53e),(CCNode *)this,1,7);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(pCVar1,pcVar5);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    pcVar3 = &UNK_000ee55a + DAT_000ee5f4;
  }
  else {
    if ((param_1 + DAT_000ee78c != 0) && (bVar6 = param_1 + DAT_000ee790 == 0, !bVar6)) {
      vDrawScript_Unit(acStack_11c,acStack_fc,acStack_3c,(CCNode *)this,local_174,local_170,1,1,
                       SUB41(param_1,0),bVar6);
      vScript_Unit(acStack_11c,acStack_dc,(CCNode *)this,1,1);
      vScript_Unit(acStack_11c,acStack_bc,(CCNode *)this,1,2);
      vScript_Unit(acStack_11c,acStack_7c,(CCNode *)this,1,3);
      vScript_Unit(acStack_11c,acStack_5c,(CCNode *)this,1,4);
      vScript_Unit(acStack_11c,acStack_9c,(CCNode *)this,1,7);
      if (param_1 == DAT_000ee7d0) {
        Effect::Effect_Monster18000(*(Effect **)(**(int **)(iVar2 + DAT_000ee7d4) + DAT_000ee7d8));
      }
      pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
      cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(pCVar1,acStack_3c);
      goto LAB_000ee778;
    }
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_124,(float)uVar7,fVar8);
    pcVar3 = (char *)(DAT_000ee7a0 + 0xee638);
    pcVar5 = (char *)(DAT_000ee7a4 + 0xee63c);
    vDrawScript_Unit(pcVar3,(char *)(DAT_000ee7a8 + 0xee63e),pcVar5,(CCNode *)this,local_124,
                     local_120,1,1,true,*(bool *)(*(int *)(iVar2 + DAT_000ee79c) + 4));
    vScript_Unit(pcVar3,(char *)(DAT_000ee7ac + 0xee654),(CCNode *)this,1,1);
    vScript_Unit(pcVar3,(char *)(DAT_000ee7b0 + 0xee664),(CCNode *)this,1,2);
    vScript_Unit(pcVar3,(char *)(DAT_000ee7b4 + 0xee676),(CCNode *)this,1,3);
    vScript_Unit(pcVar3,(char *)(DAT_000ee7b8 + 0xee688),(CCNode *)this,1,4);
    vScript_Unit(pcVar3,(char *)(DAT_000ee7bc + 0xee69a),(CCNode *)this,1,5);
    vScript_Unit(pcVar3,(char *)(DAT_000ee7c0 + 0xee6ac),(CCNode *)this,1,6);
    vScript_Unit(pcVar3,(char *)(DAT_000ee7c4 + 0xee6be),(CCNode *)this,1,7);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(pCVar1,pcVar5);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_000ee7c8 + 0xee6da));
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    pcVar3 = (char *)(DAT_000ee7cc + 0xee6e6);
  }
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,pcVar3);
LAB_000ee778:
  if (local_1c == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


