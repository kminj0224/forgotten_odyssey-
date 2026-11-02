/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f29e0  Symbol: Hero_Move_Control */

/* Hero_Move_Control(cocos2d::CCNode*, float) */

void Hero_Move_Control(CCNode *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  CCPoint *pCVar3;
  CCLayer *pCVar4;
  CCNode *this;
  undefined4 uVar5;
  char cVar6;
  undefined4 in_r1;
  int *piVar7;
  int *piVar8;
  code *pcVar9;
  char *pcVar10;
  undefined4 *puVar11;
  int iVar12;
  int **ppiVar13;
  undefined8 uVar14;
  
  iVar12 = DAT_000f2c18 + 0xf29ee;
  ppiVar13 = *(int ***)(iVar12 + DAT_000f2c1c);
  iVar1 = (**(code **)(**ppiVar13 + 0xa8))();
  piVar7 = *(int **)(iVar12 + DAT_000f2c20);
  piVar8 = *(int **)(iVar1 + 4);
  if (*piVar7 == 2) {
    if ((piVar8[0x19] + 1U < 2) || (piVar8[0x19] == 1)) {
      puVar11 = (undefined4 *)(**(code **)(**ppiVar13 + 0x38))();
      uVar5 = __subsf3(*puVar11,*(undefined4 *)(*(int *)(iVar1 + 4) + 0x14));
      iVar2 = __aeabi_fcmpgt(uVar5,0);
      if (iVar2 != 0) {
        puVar11 = (undefined4 *)(**(code **)(**ppiVar13 + 0x38))();
        __subsf3(*puVar11,*(undefined4 *)(*(int *)(iVar1 + 4) + 0x14));
        uVar14 = (**(code **)(**ppiVar13 + 0x38))(*ppiVar13);
        cocos2d::CCNode::setPosition((float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
        piVar8 = (int *)cocos2d::CCNode::getChildByTag(**(CCNode ***)(iVar12 + DAT_000f2c24),1);
        pCVar3 = (CCPoint *)(**(code **)(*piVar8 + 0x38))();
        KG_BG_Hero_Move(param_1,*pCVar3);
        pCVar4 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar13,1);
        ani_Move_ani(pCVar4);
        piVar8 = *ppiVar13;
        pcVar9 = *(code **)(*piVar8 + 0x2c);
        uVar5 = DAT_000f2c28;
LAB_000f2b18:
        (*pcVar9)(piVar8,uVar5);
      }
    }
  }
  else if (*piVar7 == 1) {
    if ((piVar8[0x19] + 1U < 2) || (piVar8[0x19] == 1)) {
      puVar11 = (undefined4 *)(**(code **)(**ppiVar13 + 0x38))();
      uVar5 = __addsf3(*puVar11,*(undefined4 *)(*(int *)(iVar1 + 4) + 0x14));
      iVar2 = __aeabi_fcmplt(uVar5,DAT_000f2c2c);
      if (iVar2 != 0) {
        puVar11 = (undefined4 *)(**(code **)(**ppiVar13 + 0x38))();
        __addsf3(*puVar11,*(undefined4 *)(*(int *)(iVar1 + 4) + 0x14));
        uVar14 = (**(code **)(**ppiVar13 + 0x38))(*ppiVar13);
        cocos2d::CCNode::setPosition((float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
        piVar8 = (int *)cocos2d::CCNode::getChildByTag(**(CCNode ***)(iVar12 + DAT_000f2c24),1);
        pCVar3 = (CCPoint *)(**(code **)(*piVar8 + 0x38))();
        KG_BG_Hero_Move(param_1,*pCVar3);
        pCVar4 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar13,1);
        ani_Move_ani(pCVar4);
        piVar8 = *ppiVar13;
        uVar5 = 0x3f800000;
        pcVar9 = *(code **)(*piVar8 + 0x2c);
        goto LAB_000f2b18;
      }
    }
  }
  else if (*piVar8 == 2) {
    piVar8[0xf] = 0;
    pCVar4 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar13,1);
    ani_Base_ani(pCVar4);
    (**(code **)(**ppiVar13 + 0x2c))(*ppiVar13,0x3f800000);
    **(undefined4 **)(iVar12 + DAT_000f2c30) = 0;
  }
  if ((*piVar7 != 0) && (pcVar10 = *(char **)(iVar12 + DAT_000f2c34), *pcVar10 != '\0')) {
    cocos2d::CCNode::stopAllActions();
    this = (CCNode *)cocos2d::CCNode::getChildByTag(**(CCNode ***)(iVar12 + DAT_000f2c38),0);
    cocos2d::CCNode::getChildByTag(this,4);
    cocos2d::CCNode::stopAllActions();
    *pcVar10 = '\0';
  }
  if (*piVar7 == 0) {
    return;
  }
  puVar11 = *(undefined4 **)(iVar12 + DAT_000f2c30);
  uVar5 = __addsf3(in_r1,*puVar11);
  *puVar11 = uVar5;
  uVar14 = __extendsfdf2();
  iVar1 = __aeabi_dcmpgt((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_000f2c10,DAT_000f2c14);
  if (iVar1 == 0) {
    return;
  }
  if (*(char *)(**(int **)(iVar12 + DAT_000f2c3c) + 1) != '\0') {
    cVar6 = *(char *)(**(int **)(iVar12 + DAT_000f2c3c) + **(int **)(iVar12 + DAT_000f2c40) +
                      DAT_000f2c44 + 4);
    if (((cVar6 == '\x03') || (cVar6 == '\x01')) || (cVar6 == '\x04')) {
      pcVar10 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar6 = (char)DAT_000f2c48 + -0x22;
    }
    else if (cVar6 == '\x02') {
      pcVar10 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar6 = (char)DAT_000f2c4c + -0x18;
    }
    else {
      if (cVar6 != '\x05') goto LAB_000f2c00;
      pcVar10 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar6 = (char)DAT_000f2c50 + -10;
    }
    uVar5 = CocosDenshion::SimpleAudioEngine::playEffect(pcVar10,(bool)cVar6);
    **(undefined4 **)(iVar12 + DAT_000f2c54) = uVar5;
  }
LAB_000f2c00:
  *puVar11 = 0;
  return;
}


