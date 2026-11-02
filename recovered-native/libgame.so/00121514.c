/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00121514  Symbol: Lode_Episode */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00121598) */
/* WARNING: Removing unreachable block (ram,0x00121598) */
/* GameScene::Lode_Episode() */

void GameScene::Lode_Episode(void)

{
  CCNode *in_r0;
  CCNode *pCVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  CCSprite *pCVar5;
  CCAction *pCVar6;
  undefined4 uVar7;
  int *piVar8;
  int *unaff_r5;
  undefined4 *puVar9;
  float in_s0;
  float extraout_s0;
  float in_s1;
  CCPoint local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  piVar8 = *(int **)(DAT_0012163c + 0x121520);
  puVar9 = *(undefined4 **)(DAT_00121640 + 0x121524);
  if (*piVar8 == 9) {
    uVar7 = 7;
  }
  else {
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,in_s0,in_s1);
    vDrawScript_Lode((char *)(DAT_0012164c + 0x121552),(char *)(DAT_00121650 + 0x121554),in_r0,
                     local_28,local_24,0x12,true,true);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_20);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0x12);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x38))();
    local_20 = *puVar3;
    local_1c = puVar3[1];
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0x12);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,1);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar1,true);
    iVar4 = *piVar8;
    if (iVar4 - 1U < 8) {
                    /* WARNING: Could not recover jumptable at 0x00121598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&BYTE_0012159d + (uint)*(byte *)(iVar4 + 0x12159b) * 2))();
      return;
    }
    (**(code **)(*unaff_r5 + 0x3c))(unaff_r5,&local_20);
    piVar8 = (int *)cocos2d::CCNode::getChildByTag(in_r0,0x12);
    (**(code **)(*piVar8 + 0xcc))(piVar8,unaff_r5,1,1);
    piVar8 = (int *)cocos2d::CCNode::getChildByTag(in_r0,0x12);
    puVar3 = (undefined4 *)(**(code **)(*piVar8 + 0xa8))();
    pCVar5 = (CCSprite *)cocos2d::CCNode::getChildByTag(in_r0,0x12);
    ani_ani_test(pCVar5,*(_KG_Anit **)*puVar3);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0x12);
    pCVar6 = (CCAction *)cocos2d::CCDelayTime::actionWithDuration(extraout_s0);
    cocos2d::CCNode::runAction(pCVar1,pCVar6);
    uVar7 = 5;
  }
  *puVar9 = uVar7;
  return;
}


