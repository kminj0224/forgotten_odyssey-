/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012cae4  Symbol: ccTouchesBegan */

/* MainMenuLayer::ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) */

void MainMenuLayer::ccTouchesBegan(CCSet *param_1,CCEvent *param_2)

{
  CCPoint CVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  CCNode *pCVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined4 local_28;
  undefined4 local_24;
  CCPoint local_20 [3];
  
  if (**(char **)(DAT_0012cc08 + 0x12caf0) == '\0') {
    iVar2 = cocos2d::CCSet::anyObject((CCSet *)param_2);
    uVar7 = *(undefined4 *)(iVar2 + 0x18);
    puVar9 = *(undefined4 **)(DAT_0012cc0c + 0x12cb08);
    uVar8 = *(undefined4 *)(iVar2 + 0x1c);
    uVar3 = __divsf3(*puVar9,DAT_0012cc10);
    __divsf3(uVar7,uVar3);
    uVar3 = __divsf3(puVar9[1],DAT_0012cc14);
    uVar10 = __divsf3(uVar8,uVar3);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20))
    ;
    iVar2 = 0xb;
    do {
      piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar2);
      puVar9 = (undefined4 *)(**(code **)(*piVar4 + 0x38))();
      uVar7 = *puVar9;
      piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar2);
      puVar9 = (undefined4 *)(**(code **)(*piVar4 + 0x7c))();
      uVar3 = __mulsf3(*puVar9,0x3f000000);
      uVar3 = __subsf3(uVar7,uVar3);
      __subsf3(local_28,uVar3);
      piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar2);
      iVar5 = (**(code **)(*piVar4 + 0x38))();
      uVar7 = *(undefined4 *)(iVar5 + 4);
      piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar2);
      iVar5 = (**(code **)(*piVar4 + 0x7c))();
      uVar3 = __mulsf3(*(undefined4 *)(iVar5 + 4),0x3f000000);
      uVar3 = __subsf3(uVar7,uVar3);
      uVar10 = __addsf3(local_24,uVar3);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)local_20,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
      CVar1 = local_20[0];
      pCVar6 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar2);
      pCVar6 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar6,0x13);
      iVar5 = Sprite_Touch2(pCVar6,CVar1);
      if (iVar5 != 0) {
        pCVar6 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar2);
        piVar4 = (int *)cocos2d::CCNode::getChildByTag(pCVar6,0x13);
        (**(code **)(*piVar4 + 0x6c))(piVar4,1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0xe);
  }
  return;
}


