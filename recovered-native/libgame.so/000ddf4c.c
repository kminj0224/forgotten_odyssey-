/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ddf4c  Symbol: SetHeroState */

/* Market_Hero::SetHeroState() */

void __thiscall Market_Hero::SetHeroState(Market_Hero *this)

{
  CCNode *pCVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  N_Draw_Number *pNVar9;
  undefined4 extraout_s0;
  undefined4 extraout_s1;
  undefined8 uVar10;
  CCPoint local_20;
  int local_1c;
  
  iVar8 = DAT_000de11c + 0xddf58;
  piVar4 = *(int **)(iVar8 + DAT_000de120);
  if (*piVar4 == 0) {
    N_Draw_Number::SetNumber_Re(*(N_Draw_Number **)(this + 300),0,2);
    N_Draw_Number::SetNumber_Re(*(N_Draw_Number **)(this + 0x130),0,2);
  }
  else {
    pNVar9 = *(N_Draw_Number **)(this + 300);
    iVar7 = GetHero_Attack(*piVar4);
    N_Draw_Number::SetNumber_Re(pNVar9,iVar7,2);
    pNVar9 = *(N_Draw_Number **)(this + 0x130);
    iVar7 = GetHero_HP(*piVar4);
    N_Draw_Number::SetNumber_Re(pNVar9,iVar7,2);
    N_Draw_Number::SetNumber_Re
              (*(N_Draw_Number **)(this + 0x128),
               *(int *)(**(int **)(iVar8 + DAT_000de124) +
                        (**(int **)(iVar8 + DAT_000de128) * 9 + *piVar4 + DAT_000de12c) * 4 + 4),0);
    Equip_Layer::reset(*(Equip_Layer **)(this + 0x138));
  }
  iVar7 = 0xb;
  do {
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar7);
    iVar2 = cocos2d::CCNode::getChildByTag(pCVar1,0);
    if (iVar2 != 0) {
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar7);
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,0);
      cocos2d::CCNode::removeFromParentAndCleanup(pCVar1,true);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x10);
  piVar5 = *(int **)(iVar8 + DAT_000de124);
  piVar6 = *(int **)(iVar8 + DAT_000de128);
  iVar7 = 0;
  do {
    iVar2 = iVar7 + 1;
    if (*(int *)((*piVar6 * 9 + iVar2 + 0x910) * 4 + *piVar5) != 0) {
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar7 + 0xb);
      set_Icon_New(pCVar1,0,0);
    }
    iVar7 = iVar2;
  } while (iVar2 != 5);
  iVar7 = cocos2d::CCNode::getChildByTag((CCNode *)this,10);
  uVar10 = CONCAT44(extraout_s1,extraout_s0);
  if (iVar7 != 0) {
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,10);
    uVar10 = cocos2d::CCNode::removeFromParentAndCleanup(pCVar1,true);
  }
  if (*(int *)((*piVar6 * 9 + *piVar4 + 0x910) * 4 + *piVar5) != 0) {
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20))
    ;
    set_Icon_New((CCNode *)this,local_20,local_1c,10);
  }
  if (**(int **)(iVar8 + DAT_000de138) == 0) {
    if (*(int *)(*piVar5 + (*piVar6 + DAT_000de13c) * 4 + 4) == 0x10) {
      uVar3 = Tutorial_Layer::node();
      (**(code **)(*(int *)this + 0xcc))(this,uVar3,0x17,0x17);
    }
    if (*(int *)(*piVar5 + (*piVar6 + DAT_000de13c) * 4 + 4) == 0x11) {
      uVar3 = Tutorial_Layer::node();
      (**(code **)(*(int *)this + 0xcc))(this,uVar3,0x17,0x17);
    }
    if (*(int *)(*piVar5 + (*piVar6 + DAT_000de13c) * 4 + 4) == 0x12) {
      uVar3 = Tutorial_Layer::node();
      (**(code **)(*(int *)this + 0xcc))(this,uVar3,0x17,0x17);
    }
  }
  return;
}


