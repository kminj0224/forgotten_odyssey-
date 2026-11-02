/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00125d0c  Symbol: NoticeYes */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00125d1c) */
/* WARNING: Removing unreachable block (ram,0x00125d1c) */
/* GameScene::NoticeYes(int) */

undefined8 __thiscall GameScene::NoticeYes(GameScene *this,int param_1)

{
  bool bVar1;
  CCScene *pCVar2;
  CCDirector *this_00;
  int iVar3;
  CCNode *pCVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  int *local_1c;
  
  iVar13 = DAT_00125e64 + 0x125d16;
  local_1c = (int *)param_1;
  switch(param_1) {
  case 0:
    GameRemove(this);
    uVar5 = 9;
    puVar8 = *(undefined4 **)(iVar13 + DAT_00125e68);
    break;
  case 1:
    GameRemove(this);
    **(undefined4 **)(iVar13 + DAT_00125e68) = 3;
    uVar5 = 2;
    puVar8 = *(undefined4 **)(iVar13 + DAT_00125e6c);
    break;
  case 2:
    GameRemove(this);
    uVar5 = 1;
    puVar8 = *(undefined4 **)(iVar13 + DAT_00125e68);
    break;
  default:
    goto switchD_00125d1c_caseD_3;
  case 10:
    iVar10 = 0;
    iVar3 = **(int **)(iVar13 + DAT_00125e70);
    iVar9 = **(int **)(iVar13 + DAT_00125e74);
    iVar6 = 1;
    local_1c = *(int **)(iVar13 + DAT_00125e7c);
    piVar7 = local_1c;
    do {
      if (*piVar7 == *(int *)((iVar3 + DAT_00125e78) * 4 + iVar9)) {
        iVar10 = iVar6;
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 3;
    } while (iVar6 != 0x15);
    iVar6 = local_1c[iVar10 * 3 + 1];
    if (iVar6 == 0) {
      if (local_1c[iVar10 * 3 + 2] <= *(int *)(iVar9 + DAT_00125e80)) {
        *(int *)(iVar9 + DAT_00125e80) = *(int *)(iVar9 + DAT_00125e80) - local_1c[iVar10 * 3 + 2];
LAB_00125e08:
        iVar10 = (iVar3 + DAT_00125e78) * 4;
        iVar3 = *(int *)(iVar10 + iVar9);
        if (iVar3 < 100) {
          iVar3 = iVar3 + 5;
        }
        else {
          iVar3 = 100;
        }
        *(int *)(iVar10 + iVar9) = iVar3;
        pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xd);
        KG_removeChild(pCVar4,true);
        pcVar11 = *(code **)(*(int *)this + 0xd0);
        uVar5 = cocos2d::CCNode::getChildByTag((CCNode *)this,0xd);
        (*pcVar11)(this,uVar5,1);
        **(undefined4 **)(iVar13 + DAT_00125e84) = 0x16;
        setInventory_Item(this);
        goto switchD_00125d1c_caseD_3;
      }
    }
    else {
      iVar12 = iVar9 + (iVar3 + DAT_00125e88) * 4;
      iVar10 = *(int *)(iVar12 + 4);
      if (iVar6 <= iVar10) {
        *(int *)(iVar12 + 4) = iVar10 - iVar6;
        goto LAB_00125e08;
      }
    }
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xd);
    KG_removeChild(pCVar4,true);
    pcVar11 = *(code **)(*(int *)this + 0xd0);
    uVar5 = cocos2d::CCNode::getChildByTag((CCNode *)this,0xd);
    (*pcVar11)(this,uVar5,1);
    Draw_Cahs((int)this);
    goto switchD_00125d1c_caseD_3;
  }
  *puVar8 = uVar5;
  pCVar2 = (CCScene *)MainScene::scene();
  this_00 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  cocos2d::CCDirector::replaceScene(this_00,pCVar2);
  bVar1 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar1);
  CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::stopAllEffects();
switchD_00125d1c_caseD_3:
  return CONCAT44(local_1c,this);
}


