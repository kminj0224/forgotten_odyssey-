/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001317dc  Symbol: Lode_BackGround */

/* Ending_Layer::Lode_BackGround() */

void __thiscall Ending_Layer::Lode_BackGround(Ending_Layer *this)

{
  CCTexture2D *pCVar1;
  undefined4 uVar2;
  CCFiniteTimeAction *pCVar3;
  CCAction *pCVar4;
  CCNode *this_00;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  code *pcVar10;
  undefined4 *puVar11;
  float fVar12;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  undefined8 uVar13;
  _ccColor4B local_b0;
  undefined local_af;
  undefined local_ae;
  undefined local_ad;
  _ccColor4B local_ac;
  undefined local_ab;
  undefined local_aa;
  undefined local_a9;
  _ccColor4B local_a8;
  undefined local_a7;
  undefined local_a6;
  undefined local_a5;
  CCPoint aCStack_a4 [8];
  CCPoint aCStack_9c [8];
  CCPoint aCStack_94 [8];
  CCPoint aCStack_8c [8];
  CCPoint aCStack_84 [8];
  CCPoint aCStack_7c [8];
  CCPoint aCStack_74 [8];
  CCPoint aCStack_6c [32];
  CCPoint aCStack_4c [8];
  CCPoint aCStack_44 [8];
  char acStack_3c [32];
  int local_1c;
  
  iVar5 = DAT_00131a10 + 0x1317e8;
  piVar6 = *(int **)(iVar5 + DAT_00131a14);
  local_1c = *piVar6;
  piVar8 = *(int **)(iVar5 + DAT_00131a18);
  iVar9 = *piVar8;
  if (iVar9 == 0xff) {
    iVar9 = cocos2d::CCNode::getChildByTag((CCNode *)this,0xb);
    if (iVar9 != 0) {
      pcVar10 = *(code **)(*(int *)this + 0xd0);
      uVar2 = cocos2d::CCNode::getChildByTag((CCNode *)this,0xb);
      (*pcVar10)(this,uVar2,1);
    }
    local_b0 = (_ccColor4B)0x0;
    local_af = 0;
    local_ae = 0;
    local_ad = 0xff;
    piVar6 = (int *)cocos2d::CCLayerColor::layerWithColor(&local_b0);
    pcVar10 = *(code **)(*piVar6 + 0x3c);
    uVar13 = __addsf3(**(undefined4 **)(iVar5 + DAT_00131a1c),DAT_00131a20);
    cocos2d::CCPoint::CCPoint(aCStack_a4,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
    (*pcVar10)(piVar6,aCStack_a4);
    (**(code **)(*(int *)this + 0xcc))(this,piVar6,0xb,0xb);
    pcVar7 = (char *)(DAT_00131a24 + 0x13186c);
    piVar8 = (int *)cocos2d::CCSprite::spriteWithFile(pcVar7);
    pCVar1 = (CCTexture2D *)(**(code **)(*piVar8 + 0x118))();
    cocos2d::CCTexture2D::setAntiAliasTexParameters(pCVar1);
    pcVar10 = *(code **)(*piVar8 + 0x3c);
    iVar5 = (**(code **)(*piVar6 + 0x7c))(piVar6);
    uVar13 = __addsf3(*(undefined4 *)(iVar5 + 4),DAT_00131a28);
    cocos2d::CCPoint::CCPoint(aCStack_9c,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
    (*pcVar10)(piVar8,aCStack_9c);
    uVar13 = (**(code **)(*piVar8 + 0x108))(piVar8,DAT_00131a2c);
    pcVar10 = *(code **)(*piVar8 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_94,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
    (*pcVar10)(piVar8,aCStack_94);
    (**(code **)(*piVar6 + 0xcc))(piVar6,piVar8,0,0);
    piVar8 = (int *)cocos2d::CCSprite::spriteWithFile(pcVar7);
    pCVar1 = (CCTexture2D *)(**(code **)(*piVar8 + 0x118))();
    cocos2d::CCTexture2D::setAntiAliasTexParameters(pCVar1);
    pcVar10 = *(code **)(*piVar8 + 0x3c);
    puVar11 = (undefined4 *)(**(code **)(*piVar6 + 0x7c))(piVar6);
    uVar2 = __addsf3(*puVar11,DAT_00131a20);
    __subsf3(uVar2,DAT_00131a2c);
    iVar5 = (**(code **)(*piVar6 + 0x7c))(piVar6);
    uVar13 = __addsf3(*(undefined4 *)(iVar5 + 4),DAT_00131a28);
    cocos2d::CCPoint::CCPoint(aCStack_8c,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
    uVar13 = (*pcVar10)(piVar8,aCStack_8c);
    pcVar10 = *(code **)(*piVar8 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_84,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
    (*pcVar10)(piVar8,aCStack_84);
    (**(code **)(*piVar8 + 0x2c))(piVar8,DAT_00131a30);
    (**(code **)(*piVar8 + 0x34))(piVar8,DAT_00131a2c);
    uVar13 = (**(code **)(*piVar6 + 0xcc))(piVar6,piVar8,1,1);
    fVar12 = (float)cocos2d::CCPoint::CCPoint
                              (aCStack_7c,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
    pCVar3 = (CCFiniteTimeAction *)
             cocos2d::CCMoveTo::actionWithDuration(fVar12,(CCPoint *)0x40000000);
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions(pCVar3,0);
  }
  if (iVar9 == 0xfe) {
    iVar5 = cocos2d::CCNode::getChildByTag((CCNode *)this,0xb);
    if (iVar5 != 0) {
      pcVar10 = *(code **)(*(int *)this + 0xd0);
      uVar2 = cocos2d::CCNode::getChildByTag((CCNode *)this,0xb);
      (*pcVar10)(this,uVar2,1);
    }
    local_ac = (_ccColor4B)0xff;
    local_ab = 0xff;
    local_aa = 0xff;
    local_a9 = 0xff;
    piVar6 = (int *)cocos2d::CCLayerColor::layerWithColor(&local_ac);
    (**(code **)(*piVar6 + 0x134))(piVar6,0);
    fVar12 = (float)(**(code **)(*(int *)this + 0xcc))(this,piVar6,0xb,0xb);
    pCVar3 = (CCFiniteTimeAction *)cocos2d::CCFadeTo::actionWithDuration(fVar12,(uchar)DAT_00131a38)
    ;
    uVar2 = cocos2d::CCFadeTo::actionWithDuration(extraout_s0,'\0');
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions(pCVar3,uVar2,0);
  }
  if (iVar9 == 0xfd) {
    piVar6 = (int *)cocos2d::CCLayer::node();
    (**(code **)(*(int *)this + 0xcc))(this,piVar6,0,0);
    local_a5 = 0xff;
    local_a8 = (_ccColor4B)0x0;
    local_a7 = 0;
    local_a6 = 0;
    uVar2 = cocos2d::CCLayerColor::layerWithColor(&local_a8);
    (**(code **)(*piVar6 + 0xcc))(piVar6,uVar2,0xffffffff,0xffffffff);
    piVar8 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00131d1c + 0x131a82));
    pcVar10 = *(code **)(*piVar8 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_74,extraout_s0_00,extraout_s1);
    (*pcVar10)(piVar8,aCStack_74);
    pcVar10 = *(code **)(*piVar8 + 0x3c);
    puVar11 = *(undefined4 **)(iVar5 + DAT_00131d20);
    uVar2 = __mulsf3(*puVar11,0x3f000000);
    __subsf3(uVar2,DAT_00131d24);
    uVar2 = __mulsf3(puVar11[1],0x3f000000);
    uVar2 = __addsf3(uVar2,0x40000000);
    uVar13 = __subsf3(uVar2,DAT_00131d24);
    cocos2d::CCPoint::CCPoint(aCStack_6c,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
    (*pcVar10)(piVar8,aCStack_6c);
    (**(code **)(*piVar8 + 0xf4))(piVar8);
    (**(code **)(*piVar8 + 0xec))(piVar8,0x7f);
    uVar13 = (**(code **)(*piVar6 + 0xcc))(piVar6,piVar8,0,0);
    pCVar3 = (CCFiniteTimeAction *)
             cocos2d::CCScaleTo::actionWithDuration
                       ((float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
    uVar2 = cocos2d::CCScaleTo::actionWithDuration(extraout_s0_01,extraout_s1_00);
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions(pCVar3,uVar2,0);
  }
  if (iVar9 == 0xfc) {
    this_00 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
    cocos2d::CCNode::removeFromParentAndCleanup(this_00,true);
    piVar8 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00131d38 + 0x131c44));
    pcVar10 = *(code **)(*piVar8 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_4c,extraout_s0_02,extraout_s1_01);
    (*pcVar10)(piVar8,aCStack_4c);
    (**(code **)(*piVar8 + 0xec))(piVar8,0);
    fVar12 = (float)(**(code **)(*(int *)this + 0xcc))(this,piVar8,0,0);
    pCVar4 = (CCAction *)cocos2d::CCFadeIn::actionWithDuration(fVar12);
    cocos2d::CCNode::runAction((CCNode *)piVar8,pCVar4);
  }
  else if (iVar9 != piVar8[1]) {
    memset(acStack_3c,0,0x1e);
    piVar8[1] = iVar9;
    iVar9 = cocos2d::CCNode::getChildByTag((CCNode *)this,0);
    if (iVar9 != 0) {
      pcVar10 = *(code **)(*(int *)this + 0xd0);
      uVar2 = cocos2d::CCNode::getChildByTag((CCNode *)this,0);
      (*pcVar10)(this,uVar2,1);
    }
    sprintf(acStack_3c,(char *)(DAT_00131d44 + 0x131cba),*piVar8);
    piVar8 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_3c);
    pcVar10 = *(code **)(*piVar8 + 0x3c);
    puVar11 = *(undefined4 **)(iVar5 + DAT_00131d20);
    __mulsf3(*puVar11,0x3f000000);
    uVar13 = __mulsf3(puVar11[1],0x3f000000);
    cocos2d::CCPoint::CCPoint(aCStack_44,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
    (*pcVar10)(piVar8,aCStack_44);
    (**(code **)(*(int *)this + 0xcc))(this,piVar8,0,0);
  }
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


