/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010e1f4  Symbol: ccTouchesMoved */

/* New_UI::ccTouchesMoved(cocos2d::CCSet*, cocos2d::CCEvent*) */

void New_UI::ccTouchesMoved(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  CCPoint *pCVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  CCNode *pCVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined4 local_28;
  undefined4 local_24;
  CCPoint local_20 [4];
  undefined4 local_1c;
  
  iVar9 = DAT_0010e50c + 0x10e200;
  if (**(int **)(iVar9 + DAT_0010e510) != 0xb) {
    return;
  }
  iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  uVar6 = *(undefined4 *)(iVar1 + 0x18);
  uVar7 = *(undefined4 *)(iVar1 + 0x1c);
  puVar10 = *(undefined4 **)(iVar9 + DAT_0010e518);
  uVar2 = __divsf3(*puVar10,DAT_0010e514);
  __divsf3(uVar6,uVar2);
  uVar2 = __divsf3(puVar10[1],DAT_0010e51c);
  uVar11 = __divsf3(uVar7,uVar2);
  cocos2d::CCPoint::CCPoint(local_20,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  uVar11 = __subsf3(*(undefined4 *)(*(int *)(iVar9 + DAT_0010e520) + 4),local_1c);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2c);
  puVar10 = (undefined4 *)(**(code **)(*piVar3 + 0x38))();
  uVar6 = *puVar10;
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2c);
  puVar10 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
  uVar2 = __mulsf3(*puVar10,0x3f000000);
  uVar2 = __subsf3(uVar6,uVar2);
  uVar2 = __subsf3(uVar2,DAT_0010e524);
  iVar1 = __aeabi_fcmplt(uVar2,local_28);
  puVar10 = *(undefined4 **)(iVar9 + DAT_0010e528);
  if (iVar1 != 0) {
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2c);
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x38))();
    uVar6 = *puVar4;
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2c);
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
    uVar2 = __mulsf3(*puVar4,0x3f000000);
    uVar2 = __addsf3(uVar6,uVar2);
    uVar2 = __addsf3(uVar2,DAT_0010e52c);
    iVar1 = __aeabi_fcmpgt(uVar2,local_28);
    if (iVar1 != 0) {
      piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2c);
      iVar1 = (**(code **)(*piVar3 + 0x38))();
      uVar6 = *(undefined4 *)(iVar1 + 4);
      piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2c);
      iVar1 = (**(code **)(*piVar3 + 0x7c))();
      uVar2 = __mulsf3(*(undefined4 *)(iVar1 + 4),0x3f000000);
      uVar2 = __subsf3(uVar6,uVar2);
      uVar2 = __subsf3(uVar2,DAT_0010e524);
      iVar1 = __aeabi_fcmplt(uVar2,local_24);
      if (iVar1 != 0) {
        piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2c);
        iVar1 = (**(code **)(*piVar3 + 0x38))();
        uVar6 = *(undefined4 *)(iVar1 + 4);
        piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2c);
        iVar1 = (**(code **)(*piVar3 + 0x7c))();
        uVar2 = __mulsf3(*(undefined4 *)(iVar1 + 4),0x3f000000);
        uVar2 = __addsf3(uVar6,uVar2);
        iVar1 = __aeabi_fcmpgt(uVar2,local_24);
        if (iVar1 != 0) {
          piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2c);
          (**(code **)(*piVar3 + 0x6c))(piVar3,1);
          piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2d);
          (**(code **)(*piVar3 + 0x6c))(piVar3,0);
          pCVar8 = **(CCNode ***)(iVar9 + DAT_0010e530);
          pCVar5 = (CCPoint *)(**(code **)(***(int ***)(iVar9 + DAT_0010e534) + 0x38))();
          KG_BG_Hero_Move(pCVar8,*pCVar5);
          uVar2 = 2;
          goto LAB_0010e504;
        }
      }
    }
  }
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2d);
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x38))();
  uVar6 = *puVar4;
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2d);
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
  uVar2 = __mulsf3(*puVar4,0x3f000000);
  uVar2 = __subsf3(uVar6,uVar2);
  uVar2 = __subsf3(uVar2,DAT_0010e52c);
  iVar1 = __aeabi_fcmplt(uVar2,local_28);
  if (iVar1 != 0) {
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2d);
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x38))();
    uVar6 = *puVar4;
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2d);
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
    uVar2 = __mulsf3(*puVar4,0x3f000000);
    uVar2 = __addsf3(uVar6,uVar2);
    uVar2 = __addsf3(uVar2,DAT_0010e524);
    iVar1 = __aeabi_fcmpgt(uVar2,local_28);
    if (iVar1 != 0) {
      piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2d);
      iVar1 = (**(code **)(*piVar3 + 0x38))();
      uVar6 = *(undefined4 *)(iVar1 + 4);
      piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2d);
      iVar1 = (**(code **)(*piVar3 + 0x7c))();
      uVar2 = __mulsf3(*(undefined4 *)(iVar1 + 4),0x3f000000);
      uVar2 = __subsf3(uVar6,uVar2);
      uVar2 = __subsf3(uVar2,DAT_0010e524);
      iVar1 = __aeabi_fcmplt(uVar2,local_24);
      if (iVar1 != 0) {
        piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2d);
        iVar1 = (**(code **)(*piVar3 + 0x38))();
        uVar6 = *(undefined4 *)(iVar1 + 4);
        piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2d);
        iVar1 = (**(code **)(*piVar3 + 0x7c))();
        uVar2 = __mulsf3(*(undefined4 *)(iVar1 + 4),0x3f000000);
        uVar2 = __addsf3(uVar6,uVar2);
        iVar1 = __aeabi_fcmpgt(uVar2,local_24);
        if (iVar1 != 0) {
          piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2c);
          (**(code **)(*piVar3 + 0x6c))(piVar3,0);
          piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2d);
          (**(code **)(*piVar3 + 0x6c))(piVar3,1);
          pCVar8 = **(CCNode ***)(iVar9 + DAT_0010e530);
          pCVar5 = (CCPoint *)(**(code **)(***(int ***)(iVar9 + DAT_0010e534) + 0x38))();
          KG_BG_Hero_Move(pCVar8,*pCVar5);
          uVar2 = 1;
          goto LAB_0010e504;
        }
      }
    }
  }
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2c);
  (**(code **)(*piVar3 + 0x6c))(piVar3,0);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2d);
  (**(code **)(*piVar3 + 0x6c))(piVar3,0);
  uVar2 = 0;
LAB_0010e504:
  *puVar10 = uVar2;
  return;
}


