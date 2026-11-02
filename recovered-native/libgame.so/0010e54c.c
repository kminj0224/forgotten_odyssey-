/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010e54c  Symbol: ccTouchesBegan */

/* New_UI::ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) */

void New_UI::ccTouchesBegan(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  CCPoint *pCVar5;
  int *piVar6;
  CCNode *pCVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  float extraout_s0;
  undefined8 uVar11;
  float extraout_s1;
  undefined local_34;
  undefined local_33;
  undefined local_32;
  CCPoint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  CCPoint local_20;
  undefined4 local_1c;
  
  iVar8 = DAT_0010e8c4 + 0x10e558;
  piVar6 = *(int **)(iVar8 + DAT_0010e8c8);
  if (*piVar6 != 0xb) {
    return;
  }
  iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  local_30 = *(undefined4 *)(iVar1 + 0x18);
  local_2c = *(undefined4 *)(iVar1 + 0x1c);
  puVar9 = *(undefined4 **)(iVar8 + DAT_0010e8d0);
  uVar2 = __divsf3(*puVar9,DAT_0010e8cc);
  __divsf3(local_30,uVar2);
  uVar2 = __divsf3(puVar9[1],DAT_0010e8d4);
  uVar11 = __divsf3(local_2c,uVar2);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  local_30 = local_20;
  local_2c = local_1c;
  uVar11 = __subsf3(*(undefined4 *)(*(int *)(iVar8 + DAT_0010e8d8) + 4),local_1c);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2c);
  puVar9 = (undefined4 *)(**(code **)(*piVar3 + 0x38))();
  uVar10 = *puVar9;
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2c);
  puVar9 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
  uVar2 = __mulsf3(*puVar9,0x3f000000);
  uVar2 = __subsf3(uVar10,uVar2);
  uVar2 = __subsf3(uVar2,DAT_0010e8dc);
  iVar1 = __aeabi_fcmplt(uVar2,local_28);
  if (iVar1 == 0) {
LAB_0010e6be:
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2d);
    puVar9 = (undefined4 *)(**(code **)(*piVar3 + 0x38))();
    uVar10 = *puVar9;
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2d);
    puVar9 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
    uVar2 = __mulsf3(*puVar9,0x3f000000);
    uVar2 = __subsf3(uVar10,uVar2);
    uVar2 = __subsf3(uVar2,DAT_0010e8e0);
    iVar1 = __aeabi_fcmplt(uVar2,local_28);
    if (iVar1 != 0) {
      piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2d);
      puVar9 = (undefined4 *)(**(code **)(*piVar3 + 0x38))();
      uVar10 = *puVar9;
      piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2d);
      puVar9 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
      uVar2 = __mulsf3(*puVar9,0x3f000000);
      uVar2 = __addsf3(uVar10,uVar2);
      uVar2 = __addsf3(uVar2,DAT_0010e8dc);
      iVar1 = __aeabi_fcmpgt(uVar2,local_28);
      if (iVar1 != 0) {
        piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2d);
        iVar1 = (**(code **)(*piVar3 + 0x38))();
        uVar10 = *(undefined4 *)(iVar1 + 4);
        piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2d);
        iVar1 = (**(code **)(*piVar3 + 0x7c))();
        uVar2 = __mulsf3(*(undefined4 *)(iVar1 + 4),0x3f000000);
        uVar2 = __subsf3(uVar10,uVar2);
        uVar2 = __subsf3(uVar2,DAT_0010e8dc);
        iVar1 = __aeabi_fcmplt(uVar2,local_24);
        if (iVar1 != 0) {
          piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2d);
          iVar1 = (**(code **)(*piVar3 + 0x38))();
          uVar10 = *(undefined4 *)(iVar1 + 4);
          piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2d);
          iVar1 = (**(code **)(*piVar3 + 0x7c))();
          uVar2 = __mulsf3(*(undefined4 *)(iVar1 + 4),0x3f000000);
          uVar2 = __addsf3(uVar10,uVar2);
          iVar1 = __aeabi_fcmpgt(uVar2,local_24);
          if (iVar1 != 0) {
            piVar6 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2c);
            (**(code **)(*piVar6 + 0x6c))(piVar6,0);
            piVar6 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2d);
            (**(code **)(*piVar6 + 0x6c))(piVar6,1);
            pCVar7 = **(CCNode ***)(iVar8 + DAT_0010e988);
            pCVar5 = (CCPoint *)(**(code **)(***(int ***)(iVar8 + DAT_0010e98c) + 0x38))();
            KG_BG_Hero_Move(pCVar7,*pCVar5);
            uVar2 = 1;
            puVar9 = *(undefined4 **)(iVar8 + DAT_0010e990);
            goto LAB_0010e982;
          }
        }
      }
    }
    pCVar7 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,1);
    iVar1 = Sprite_Touch2(pCVar7,local_30);
    if (iVar1 == 0) {
      pCVar7 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x10);
      iVar1 = Sprite_Touch2(pCVar7,local_30);
      if ((iVar1 != 0) && (*piVar6 == 0xb)) {
        piVar6 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x11);
        (**(code **)(*piVar6 + 0x6c))(piVar6,1);
      }
    }
    else {
      iVar1 = 2;
      do {
        pCVar7 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar1);
        iVar4 = Sprite_Touch3(pCVar7,local_30,extraout_s0,extraout_s1);
        if (iVar4 != 0) {
          piVar6 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar1);
          (**(code **)(*piVar6 + 0xec))(piVar6,0x7f);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 6);
    }
    iVar1 = 6;
    do {
      pCVar7 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar1);
      iVar4 = Sprite_Touch2(pCVar7,local_30);
      if ((iVar4 != 0) &&
         (*(char *)(**(int **)(iVar8 + DAT_0010e8e8) + **(int **)(iVar8 + DAT_0010e8ec) * 9 +
                    iVar1 + -6 + DAT_0010e8f0) != '\0')) {
        piVar6 = *(int **)(iVar8 + DAT_0010e8f4);
        puVar9 = (undefined4 *)*piVar6;
        uVar2 = __floatsisf(*(undefined4 *)(iVar1 * 4 + *(int *)(iVar8 + DAT_0010e8f8) + -0x18));
        iVar4 = __aeabi_fcmpge(*puVar9,uVar2);
        if (iVar4 != 0) {
          piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar1);
          local_34 = 0x7f;
          local_33 = 0x7f;
          local_32 = 0x7f;
          (**(code **)(*piVar3 + 0xf4))(piVar3,&local_34);
          *(undefined *)(*piVar6 + iVar1 + -6 + 0x38) = 1;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0xf);
  }
  else {
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2c);
    puVar9 = (undefined4 *)(**(code **)(*piVar3 + 0x38))();
    uVar10 = *puVar9;
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2c);
    puVar9 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
    uVar2 = __mulsf3(*puVar9,0x3f000000);
    uVar2 = __addsf3(uVar10,uVar2);
    uVar2 = __addsf3(uVar2,DAT_0010e8e0);
    iVar1 = __aeabi_fcmpgt(uVar2,local_28);
    if (iVar1 == 0) goto LAB_0010e6be;
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2c);
    iVar1 = (**(code **)(*piVar3 + 0x38))();
    uVar10 = *(undefined4 *)(iVar1 + 4);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2c);
    iVar1 = (**(code **)(*piVar3 + 0x7c))();
    uVar2 = __mulsf3(*(undefined4 *)(iVar1 + 4),0x3f000000);
    uVar2 = __subsf3(uVar10,uVar2);
    uVar2 = __subsf3(uVar2,DAT_0010e8dc);
    iVar1 = __aeabi_fcmplt(uVar2,local_24);
    if (iVar1 == 0) goto LAB_0010e6be;
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2c);
    iVar1 = (**(code **)(*piVar3 + 0x38))();
    uVar10 = *(undefined4 *)(iVar1 + 4);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2c);
    iVar1 = (**(code **)(*piVar3 + 0x7c))();
    uVar2 = __mulsf3(*(undefined4 *)(iVar1 + 4),0x3f000000);
    uVar2 = __addsf3(uVar10,uVar2);
    iVar1 = __aeabi_fcmpgt(uVar2,local_24);
    if (iVar1 == 0) goto LAB_0010e6be;
    piVar6 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2c);
    (**(code **)(*piVar6 + 0x6c))(piVar6,1);
    piVar6 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2d);
    (**(code **)(*piVar6 + 0x6c))(piVar6,0);
    pCVar7 = **(CCNode ***)(iVar8 + DAT_0010e988);
    pCVar5 = (CCPoint *)(**(code **)(***(int ***)(iVar8 + DAT_0010e98c) + 0x38))();
    KG_BG_Hero_Move(pCVar7,*pCVar5);
    uVar2 = 2;
    puVar9 = *(undefined4 **)(iVar8 + DAT_0010e990);
LAB_0010e982:
    *puVar9 = uVar2;
  }
  return;
}


