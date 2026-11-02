/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d5364  Symbol: ccTouchesBegan */

/* Market_Equip::ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) */

void Market_Equip::ccTouchesBegan(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  CCNode *pCVar4;
  int iVar5;
  CCSize *pCVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  code *pcVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined8 uVar14;
  CCPoint local_28;
  CCPoint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = DAT_000d56dc + 0xd5370;
  iVar2 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  uVar9 = *(undefined4 *)(iVar2 + 0x18);
  uVar10 = *(undefined4 *)(iVar2 + 0x1c);
  puVar12 = *(undefined4 **)(iVar1 + DAT_000d56e0);
  uVar3 = __divsf3(*puVar12,DAT_000d56e4);
  __divsf3(uVar9,uVar3);
  uVar3 = __divsf3(puVar12[1],DAT_000d56e8);
  uVar14 = __divsf3(uVar10,uVar3);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
  if (**(int **)(iVar1 + DAT_000d56ec) != 3) goto LAB_000d5860;
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x58);
  iVar5 = Sprite_Touch(pCVar4,local_28);
  iVar2 = 0x58;
  pCVar4 = (CCNode *)param_1;
  if (iVar5 == 0) {
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
    piVar8 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,0);
    pCVar6 = (CCSize *)(**(code **)(*piVar8 + 0x38))();
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
    piVar8 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,0);
    (**(code **)(*piVar8 + 0x7c))();
    iVar2 = KG_Touch(local_28,local_24,*pCVar6);
    if (iVar2 != 0) {
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      iVar2 = 0;
      goto LAB_000d5830;
    }
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
    piVar8 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,2);
    pCVar6 = (CCSize *)(**(code **)(*piVar8 + 0x38))();
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
    piVar8 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,2);
    (**(code **)(*piVar8 + 0x7c))();
    iVar2 = KG_Touch(local_28,local_24,*pCVar6);
    if (iVar2 != 0) {
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      iVar2 = 2;
      goto LAB_000d5830;
    }
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
    piVar8 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,1);
    pCVar6 = (CCSize *)(**(code **)(*piVar8 + 0x38))();
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
    piVar8 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,1);
    (**(code **)(*piVar8 + 0x7c))();
    iVar2 = KG_Touch(local_28,local_24,*pCVar6);
    if (iVar2 != 0) {
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      iVar2 = 1;
      goto LAB_000d5830;
    }
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
    piVar8 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,5);
    pCVar6 = (CCSize *)(**(code **)(*piVar8 + 0x38))();
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
    piVar8 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,5);
    (**(code **)(*piVar8 + 0x7c))();
    iVar2 = KG_Touch(local_28,local_24,*pCVar6);
    if (iVar2 != 0) {
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      iVar2 = 5;
      goto LAB_000d5830;
    }
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
    piVar8 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,6);
    pCVar6 = (CCSize *)(**(code **)(*piVar8 + 0x38))();
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
    piVar8 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,6);
    (**(code **)(*piVar8 + 0x7c))();
    iVar2 = KG_Touch(local_28,local_24,*pCVar6);
    if (iVar2 != 0) {
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar8 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,6);
      (**(code **)(*piVar8 + 0xec))(piVar8,0);
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar8 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,7);
      pcVar11 = *(code **)(*piVar8 + 0xec);
      uVar3 = 0;
      goto LAB_000d583c;
    }
    piVar8 = *(int **)(iVar1 + DAT_000d56f0);
    piVar13 = *(int **)(iVar1 + DAT_000d56f4);
    if (*(char *)(*piVar8 + *piVar13 * 9 + DAT_000d56f8) != '\0') {
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar7 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,9);
      pCVar6 = (CCSize *)(**(code **)(*piVar7 + 0x38))();
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar7 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,9);
      (**(code **)(*piVar7 + 0x7c))();
      iVar2 = KG_Touch(local_28,local_24,*pCVar6);
      if (iVar2 != 0) {
        pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
        iVar2 = 9;
        goto LAB_000d5830;
      }
    }
    if (*(char *)(*piVar8 + *piVar13 * 9 + DAT_000d5940) != '\0') {
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar7 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,10);
      pCVar6 = (CCSize *)(**(code **)(*piVar7 + 0x38))();
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar7 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,10);
      (**(code **)(*piVar7 + 0x7c))();
      iVar2 = KG_Touch(local_28,local_24,*pCVar6);
      if (iVar2 != 0) {
        pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
        iVar2 = 10;
        goto LAB_000d5830;
      }
    }
    if (*(char *)(*piVar8 + *piVar13 * 9 + DAT_000d5944) != '\0') {
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar7 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,0xb);
      pCVar6 = (CCSize *)(**(code **)(*piVar7 + 0x38))();
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar7 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,0xb);
      (**(code **)(*piVar7 + 0x7c))();
      iVar2 = KG_Touch(local_28,local_24,*pCVar6);
      if (iVar2 != 0) {
        pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
        iVar2 = 0xb;
        goto LAB_000d5830;
      }
    }
    if (*(char *)(*piVar8 + *piVar13 * 9 + DAT_000d5948) != '\0') {
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar7 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,0xc);
      pCVar6 = (CCSize *)(**(code **)(*piVar7 + 0x38))();
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar7 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,0xc);
      (**(code **)(*piVar7 + 0x7c))();
      iVar2 = KG_Touch(local_28,local_24,*pCVar6);
      if (iVar2 != 0) {
        pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
        iVar2 = 0xc;
        goto LAB_000d5830;
      }
    }
    if (*(char *)(*piVar8 + *piVar13 * 9 + DAT_000d594c) != '\0') {
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar7 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,0xd);
      pCVar6 = (CCSize *)(**(code **)(*piVar7 + 0x38))();
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar7 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,0xd);
      (**(code **)(*piVar7 + 0x7c))();
      iVar2 = KG_Touch(local_28,local_24,*pCVar6);
      if (iVar2 != 0) {
        pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
        iVar2 = 0xd;
        goto LAB_000d5830;
      }
    }
    if (*(char *)(*piVar8 + *piVar13 * 9 + DAT_000d5950) != '\0') {
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar7 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,0xe);
      pCVar6 = (CCSize *)(**(code **)(*piVar7 + 0x38))();
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar7 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,0xe);
      (**(code **)(*piVar7 + 0x7c))();
      iVar2 = KG_Touch(local_28,local_24,*pCVar6);
      if (iVar2 != 0) {
        pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
        iVar2 = 0xe;
        goto LAB_000d5830;
      }
    }
    if (*(char *)(*piVar8 + *piVar13 * 9 + DAT_000d5954) != '\0') {
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar7 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,0xf);
      pCVar6 = (CCSize *)(**(code **)(*piVar7 + 0x38))();
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar7 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,0xf);
      (**(code **)(*piVar7 + 0x7c))();
      iVar2 = KG_Touch(local_28,local_24,*pCVar6);
      if (iVar2 != 0) {
        pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
        iVar2 = 0xf;
        goto LAB_000d5830;
      }
    }
    if (*(char *)(*piVar8 + *piVar13 * 9 + 0x23c0) != '\0') {
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar8 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,0x10);
      pCVar6 = (CCSize *)(**(code **)(*piVar8 + 0x38))();
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      piVar8 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,0x10);
      (**(code **)(*piVar8 + 0x7c))();
      iVar2 = KG_Touch(local_28,local_24,*pCVar6);
      if (iVar2 != 0) {
        pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
        iVar2 = 0x10;
        goto LAB_000d5830;
      }
    }
  }
  else {
LAB_000d5830:
    piVar8 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,iVar2);
    uVar3 = 0x7f;
    pcVar11 = *(code **)(*piVar8 + 0xec);
LAB_000d583c:
    (*pcVar11)(piVar8,uVar3);
  }
  iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x67);
  if (iVar2 != 0) {
    pcVar11 = *(code **)(*(int *)param_1 + 0xd0);
    uVar3 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x67);
    (*pcVar11)(param_1,uVar3,1);
  }
LAB_000d5860:
  uVar14 = __subsf3(*(undefined4 *)(*(int *)(iVar1 + DAT_000d593c) + 4),local_24);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
  *(undefined4 *)(param_1 + 0x11c) = local_20;
  *(undefined4 *)(param_1 + 0x120) = local_1c;
  *(undefined4 *)(param_1 + 0x124) = local_20;
  *(undefined4 *)(param_1 + 0x128) = local_1c;
  return;
}


