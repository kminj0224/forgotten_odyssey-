/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ea3a4  Symbol: Hero_Lode */

/* Hero_HeroEquip::Hero_Lode(int) */

void __thiscall Hero_HeroEquip::Hero_Lode(Hero_HeroEquip *this,int param_1)

{
  int iVar1;
  CCNode *pCVar2;
  int *piVar3;
  int *piVar4;
  CCLayer *pCVar5;
  CCPoint *pCVar6;
  code *pcVar7;
  undefined4 extraout_s0;
  float fVar8;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  undefined4 extraout_s1;
  undefined8 uVar9;
  float fVar10;
  float extraout_s1_00;
  CCPoint local_98;
  CCPoint local_94;
  int local_90;
  int local_8c;
  CCPoint aCStack_88 [8];
  CCPoint local_80;
  CCPoint local_7c;
  int local_78;
  int local_74;
  CCPoint aCStack_70 [8];
  CCPoint local_68;
  CCPoint local_64;
  int local_60;
  int local_5c;
  CCPoint aCStack_58 [8];
  CCPoint local_50;
  CCPoint local_4c;
  int local_48;
  int local_44;
  CCPoint aCStack_40 [8];
  CCPoint local_38;
  CCPoint local_34;
  int local_30;
  int local_2c;
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,9);
  if (iVar1 != 0) {
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,9);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar2,true);
  }
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,8);
  if (iVar1 != 0) {
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,8);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar2,true);
  }
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x13);
  uVar9 = CONCAT44(extraout_s1,extraout_s0);
  if (iVar1 != 0) {
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x13);
    uVar9 = cocos2d::CCNode::removeFromParentAndCleanup(pCVar2,true);
  }
  fVar10 = (float)((ulonglong)uVar9 >> 0x20);
  fVar8 = (float)uVar9;
  if (param_1 == 1) {
    uVar9 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_98,fVar8,fVar10);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_90,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    vDrawFrame((CCNode *)this,(char *)(DAT_000ea770 + 0xea41e),local_98,local_94,local_90,local_8c);
    piVar3 = (int *)operator_new(0x11c);
    Hero1::Hero1((Hero1 *)piVar3);
    (**(code **)(*piVar3 + 300))(piVar3);
    piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar3,1);
    uVar9 = (**(code **)(*piVar4 + 0xa8))();
    pcVar7 = *(code **)(*piVar3 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_88,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    (*pcVar7)(piVar3,aCStack_88);
    (**(code **)(*(int *)this + 0xcc))(this,piVar3,8,8);
    cocos2d::CCObject::release((CCObject *)piVar3);
    iVar1 = (**(code **)(*piVar3 + 0xa8))(piVar3);
    *(undefined4 *)(*(int *)(iVar1 + 4) + 100) = 0xffffffff;
    iVar1 = (**(code **)(*piVar3 + 0xa8))(piVar3);
    **(undefined4 **)(iVar1 + 4) = 2;
LAB_000ea6ea:
    pCVar5 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)piVar3,1);
    fVar8 = (float)ani_Base_ani(pCVar5);
  }
  else {
    if (param_1 != 2) {
      if (param_1 == 3) {
        uVar9 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_68,fVar8,fVar10);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&local_60,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
        vDrawFrame((CCNode *)this,(char *)(DAT_000ea784 + 0xea584),local_68,local_64,local_60,
                   local_5c);
        piVar3 = (int *)operator_new(0x11c);
        Hero6::Hero6((Hero6 *)piVar3);
        (**(code **)(*piVar3 + 0x128))(piVar3);
        piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar3,1);
        uVar9 = (**(code **)(*piVar4 + 0xa8))();
        pcVar7 = *(code **)(*piVar3 + 0x3c);
        cocos2d::CCPoint::CCPoint(aCStack_58,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
        pCVar6 = aCStack_58;
      }
      else if (param_1 == 4) {
        uVar9 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_50,fVar8,fVar10);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&local_48,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
        vDrawFrame((CCNode *)this,(char *)(DAT_000ea788 + 0xea5f4),local_50,local_4c,local_48,
                   local_44);
        piVar3 = (int *)operator_new(0x11c);
        Hero3::Hero3((Hero3 *)piVar3);
        (**(code **)(*piVar3 + 0x128))(piVar3);
        piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar3,1);
        uVar9 = (**(code **)(*piVar4 + 0xa8))();
        pcVar7 = *(code **)(*piVar3 + 0x3c);
        cocos2d::CCPoint::CCPoint(aCStack_40,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
        pCVar6 = aCStack_40;
      }
      else {
        if (param_1 != 5) goto LAB_000ea6fa;
        uVar9 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,fVar8,fVar10);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&local_30,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
        vDrawFrame((CCNode *)this,(char *)(DAT_000ea78c + 0xea664),local_38,local_34,local_30,
                   local_2c);
        piVar3 = (int *)operator_new(0x11c);
        Hero7::Hero7((Hero7 *)piVar3);
        (**(code **)(*piVar3 + 0x128))(piVar3);
        piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar3,1);
        uVar9 = (**(code **)(*piVar4 + 0xa8))();
        pcVar7 = *(code **)(*piVar3 + 0x3c);
        cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
        pCVar6 = aCStack_28;
      }
      (*pcVar7)(piVar3,pCVar6);
      (**(code **)(*(int *)this + 0xcc))(this,piVar3,8,8);
      cocos2d::CCObject::release((CCObject *)piVar3);
      iVar1 = (**(code **)(*piVar3 + 0xa8))(piVar3);
      *(undefined4 *)(*(int *)(iVar1 + 4) + 100) = 0xffffffff;
      iVar1 = (**(code **)(*piVar3 + 0xa8))(piVar3);
      **(undefined4 **)(iVar1 + 4) = 2;
      goto LAB_000ea6ea;
    }
    uVar9 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_80,fVar8,fVar10);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_78,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    vDrawFrame((CCNode *)this,(char *)(DAT_000ea77c + 0xea4cc),local_80,local_7c,local_78,local_74);
    piVar3 = (int *)operator_new(0x11c);
    Hero2::Hero2((Hero2 *)piVar3);
    (**(code **)(*piVar3 + 0x128))(piVar3);
    piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar3,1);
    uVar9 = (**(code **)(*piVar4 + 0xa8))();
    pcVar7 = *(code **)(*piVar3 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_70,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    (*pcVar7)(piVar3,aCStack_70);
    (**(code **)(*(int *)this + 0xcc))(this,piVar3,8,8);
    cocos2d::CCObject::release((CCObject *)piVar3);
    iVar1 = (**(code **)(*piVar3 + 0xa8))(piVar3);
    *(undefined4 *)(*(int *)(iVar1 + 4) + 100) = 0xffffffff;
    iVar1 = (**(code **)(*piVar3 + 0xa8))(piVar3);
    **(undefined4 **)(iVar1 + 4) = 2;
    pCVar5 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)piVar3,1);
    fVar8 = (float)ani_Base_ani(pCVar5);
  }
  cocos2d::CCNode::setScale((CCNode *)piVar3,fVar8);
LAB_000ea6fa:
  piVar3 = *(int **)(DAT_000ea794 + 0xea700);
  *piVar3 = param_1;
  piVar4 = (int *)Equip_Layer::node();
  *(int **)(this + 0x11c) = piVar4;
  pcVar7 = *(code **)(*piVar4 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0_00,extraout_s1_00);
  (*pcVar7)(piVar4,aCStack_20);
  (**(code **)(*(int *)this + 0xcc))(this,*(undefined4 *)(this + 0x11c),0x13,0x13);
  iVar1 = 2;
  do {
    if (*piVar3 == iVar1 + -1) {
      pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar1);
      fVar8 = extraout_s0_01;
    }
    else {
      pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar1);
      fVar8 = extraout_s0_02;
    }
    iVar1 = iVar1 + 1;
    cocos2d::CCNode::setScale(pCVar2,fVar8);
  } while (iVar1 != 7);
  SetHeroState(this);
  return;
}


