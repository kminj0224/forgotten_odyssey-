/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012ccf0  Symbol: MM_Play_Touch */

/* MainMenuLayer::MM_Play_Touch(cocos2d::CCPoint) */

void MainMenuLayer::MM_Play_Touch(CCPoint param_1)

{
  CCPoint CVar1;
  CCNode *pCVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  CCPoint in_r1;
  undefined4 in_r2;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined8 uVar13;
  CCPoint local_20 [3];
  
  iVar10 = 0;
  iVar9 = DAT_0012ce98 + 0x12cd02;
  do {
    iVar11 = iVar10 + 0xb;
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar11);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,0x13);
    (**(code **)(*piVar3 + 0x6c))(piVar3,0);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar11);
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x38))();
    uVar5 = *puVar4;
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar11);
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
    uVar6 = __mulsf3(*puVar4,0x3f000000);
    uVar5 = __subsf3(uVar5,uVar6);
    __subsf3(in_r1,uVar5);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar11);
    iVar7 = (**(code **)(*piVar3 + 0x38))();
    uVar5 = *(undefined4 *)(iVar7 + 4);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar11);
    iVar7 = (**(code **)(*piVar3 + 0x7c))();
    uVar6 = __mulsf3(*(undefined4 *)(iVar7 + 4),0x3f000000);
    uVar5 = __subsf3(uVar5,uVar6);
    uVar13 = __addsf3(in_r2,uVar5);
    cocos2d::CCPoint::CCPoint((CCPoint *)local_20,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
    CVar1 = local_20[0];
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar11);
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,0x13);
    iVar7 = Sprite_Touch2(pCVar2,CVar1);
    if (iVar7 != 0) {
      pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar11);
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,0x13);
      (**(code **)(*piVar3 + 0x6c))(piVar3,0);
      piVar12 = *(int **)(iVar9 + DAT_0012ce9c);
      iVar7 = *piVar12 + iVar10;
      puVar4 = *(undefined4 **)(iVar9 + DAT_0012cea0);
      piVar3 = *(int **)(iVar9 + DAT_0012cea4);
      if (*(char *)(iVar7 + 3) == '\0') {
        *puVar4 = 0xb;
        *(undefined *)(iVar7 + 3) = 1;
        *piVar3 = iVar10;
        return;
      }
      *piVar3 = iVar10;
      *puVar4 = 1;
      cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)param_1,true);
      iVar11 = *piVar12;
      iVar7 = 0;
      do {
        if (*(char *)(iVar11 + iVar10 * 200 + iVar7 + 6) == '\0') {
          piVar3 = *(int **)(iVar9 + DAT_0012cea8);
          iVar7 = __divsi3(iVar7 + -1,10);
          *piVar3 = iVar7 + 1;
          break;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != 100);
      if (7 < **(int **)(iVar9 + DAT_0012cea8)) {
        **(int **)(iVar9 + DAT_0012cea8) = 8;
      }
      if (*(char *)(iVar11 + 1) != '\0') {
        pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar8,(bool)((char)DAT_0012ceac + '`'));
      }
    }
    iVar10 = iVar10 + 1;
    if (iVar10 == 3) {
      pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x14);
      iVar9 = Sprite_Touch2(pCVar2,in_r1);
      if (iVar9 != 0) {
        uVar5 = MainOption::node();
        (**(code **)(*(int *)param_1 + 0xcc))(param_1,uVar5,0x17,0x17);
      }
      return;
    }
  } while( true );
}


