/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012f730  Symbol: Lode_BackGround */

/* Story_Layer::Lode_BackGround() */

void __thiscall Story_Layer::Lode_BackGround(Story_Layer *this)

{
  CCTexture2D *pCVar1;
  undefined4 uVar2;
  CCFiniteTimeAction *pCVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  code *pcVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 extraout_s0;
  float fVar11;
  float extraout_s0_00;
  undefined4 extraout_s1;
  undefined8 uVar12;
  _ccColor4B local_7c;
  undefined local_7b;
  undefined local_7a;
  undefined local_79;
  _ccColor4B local_78;
  undefined local_77;
  undefined local_76;
  undefined local_75;
  CCPoint aCStack_74 [8];
  CCPoint aCStack_6c [8];
  CCPoint aCStack_64 [8];
  CCPoint aCStack_5c [8];
  CCPoint aCStack_54 [8];
  CCPoint aCStack_4c [8];
  CCPoint aCStack_44 [8];
  char acStack_3c [32];
  int local_1c;
  
  iVar10 = DAT_0012fa18 + 0x12f73c;
  piVar4 = *(int **)(iVar10 + DAT_0012fa1c);
  local_1c = *piVar4;
  piVar6 = *(int **)(iVar10 + DAT_0012fa20);
  iVar7 = *piVar6;
  if (iVar7 == 0xff) {
    iVar7 = cocos2d::CCNode::getChildByTag((CCNode *)this,0xb);
    uVar12 = CONCAT44(extraout_s1,extraout_s0);
    if (iVar7 != 0) {
      pcVar8 = *(code **)(*(int *)this + 0xd0);
      uVar2 = cocos2d::CCNode::getChildByTag((CCNode *)this,0xb);
      uVar12 = (*pcVar8)(this,uVar2,1);
    }
    local_79 = 0xff;
    local_7c = (_ccColor4B)0x0;
    local_7b = 0;
    local_7a = 0;
    puVar9 = *(undefined4 **)(iVar10 + DAT_0012fa24);
    piVar4 = (int *)cocos2d::CCLayerColor::layerWithColorWidthHeight
                              (&local_7c,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
    pcVar8 = *(code **)(*piVar4 + 0x3c);
    uVar12 = __addsf3(*puVar9,DAT_0012fa28);
    cocos2d::CCPoint::CCPoint(aCStack_74,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
    (*pcVar8)(piVar4,aCStack_74);
    (**(code **)(*(int *)this + 0xcc))(this,piVar4,0xb,0xb);
    pcVar5 = (char *)(DAT_0012fa2c + 0x12f7c0);
    piVar6 = (int *)cocos2d::CCSprite::spriteWithFile(pcVar5);
    pCVar1 = (CCTexture2D *)(**(code **)(*piVar6 + 0x118))();
    cocos2d::CCTexture2D::setAntiAliasTexParameters(pCVar1);
    pcVar8 = *(code **)(*piVar6 + 0x3c);
    iVar7 = (**(code **)(*piVar4 + 0x7c))(piVar4);
    uVar12 = __addsf3(*(undefined4 *)(iVar7 + 4),DAT_0012fa30);
    cocos2d::CCPoint::CCPoint(aCStack_6c,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
    (*pcVar8)(piVar6,aCStack_6c);
    uVar12 = (**(code **)(*piVar6 + 0x108))(piVar6,DAT_0012fa34);
    pcVar8 = *(code **)(*piVar6 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_64,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
    (*pcVar8)(piVar6,aCStack_64);
    (**(code **)(*piVar4 + 0xcc))(piVar4,piVar6,0,0);
    piVar6 = (int *)cocos2d::CCSprite::spriteWithFile(pcVar5);
    pCVar1 = (CCTexture2D *)(**(code **)(*piVar6 + 0x118))();
    cocos2d::CCTexture2D::setAntiAliasTexParameters(pCVar1);
    pcVar8 = *(code **)(*piVar6 + 0x3c);
    puVar9 = (undefined4 *)(**(code **)(*piVar4 + 0x7c))(piVar4);
    uVar2 = __addsf3(*puVar9,DAT_0012fa28);
    __subsf3(uVar2,DAT_0012fa34);
    iVar7 = (**(code **)(*piVar4 + 0x7c))(piVar4);
    uVar12 = __addsf3(*(undefined4 *)(iVar7 + 4),DAT_0012fa30);
    cocos2d::CCPoint::CCPoint(aCStack_5c,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
    uVar12 = (*pcVar8)(piVar6,aCStack_5c);
    pcVar8 = *(code **)(*piVar6 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_54,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
    (*pcVar8)(piVar6,aCStack_54);
    (**(code **)(*piVar6 + 0x2c))(piVar6,DAT_0012fa38);
    (**(code **)(*piVar6 + 0x34))(piVar6,DAT_0012fa34);
    uVar12 = (**(code **)(*piVar4 + 0xcc))(piVar4,piVar6,1,1);
    fVar11 = (float)cocos2d::CCPoint::CCPoint
                              (aCStack_4c,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
    pCVar3 = (CCFiniteTimeAction *)
             cocos2d::CCMoveTo::actionWithDuration(fVar11,(CCPoint *)0x40000000);
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions(pCVar3,0);
  }
  if (iVar7 == 0xfe) {
    iVar7 = cocos2d::CCNode::getChildByTag((CCNode *)this,0xb);
    if (iVar7 != 0) {
      pcVar8 = *(code **)(*(int *)this + 0xd0);
      uVar2 = cocos2d::CCNode::getChildByTag((CCNode *)this,0xb);
      (*pcVar8)(this,uVar2,1);
    }
    local_78 = (_ccColor4B)0xff;
    local_77 = 0xff;
    local_76 = 0xff;
    local_75 = 0xff;
    piVar4 = (int *)cocos2d::CCLayerColor::layerWithColor(&local_78);
    (**(code **)(*piVar4 + 0x134))(piVar4,0);
    fVar11 = (float)(**(code **)(*(int *)this + 0xcc))(this,piVar4,0xb,0xb);
    pCVar3 = (CCFiniteTimeAction *)cocos2d::CCFadeTo::actionWithDuration(fVar11,(uchar)DAT_0012fa40)
    ;
    uVar2 = cocos2d::CCFadeTo::actionWithDuration(extraout_s0_00,'\0');
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions(pCVar3,uVar2,0);
  }
  if (iVar7 != piVar6[1]) {
    memset(acStack_3c,0,0x1e);
    piVar6[1] = iVar7;
    iVar7 = cocos2d::CCNode::getChildByTag((CCNode *)this,0);
    if (iVar7 != 0) {
      pcVar8 = *(code **)(*(int *)this + 0xd0);
      uVar2 = cocos2d::CCNode::getChildByTag((CCNode *)this,0);
      (*pcVar8)(this,uVar2,1);
    }
    sprintf(acStack_3c,(char *)(DAT_0012fa44 + 0x12f9b8),*piVar6);
    piVar6 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_3c);
    pcVar8 = *(code **)(*piVar6 + 0x3c);
    puVar9 = *(undefined4 **)(iVar10 + DAT_0012fa24);
    __mulsf3(*puVar9,0x3f000000);
    uVar12 = __mulsf3(puVar9[1],0x3f000000);
    cocos2d::CCPoint::CCPoint(aCStack_44,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
    (*pcVar8)(piVar6,aCStack_44);
    (**(code **)(*(int *)this + 0xcc))(this,piVar6,0,0);
  }
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


