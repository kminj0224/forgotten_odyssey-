/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001340d0  Symbol: onEnter */

/* New_Game_Event::onEnter() */

void __thiscall New_Game_Event::onEnter(New_Game_Event *this)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  CCFiniteTimeAction *pCVar4;
  CCArray *this_00;
  int *piVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  float extraout_s0;
  undefined8 uVar13;
  uint local_48;
  _ccColor4B local_2c;
  undefined local_2b;
  undefined local_2a;
  undefined local_29;
  CCPoint aCStack_28 [8];
  CCPoint local_20;
  int local_1c;
  
  bVar1 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar1);
  CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::stopAllEffects();
  CocosDenshion::SimpleAudioEngine::sharedEngine();
  uVar13 = CocosDenshion::SimpleAudioEngine::stopAllEffects();
  this[0x114] = (New_Game_Event)0x0;
  pcVar8 = *(code **)(*(int *)this + 0x74);
  puVar11 = (undefined4 *)(DAT_00134328 + 0x134108);
  cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  (*pcVar8)(this,aCStack_28);
  puVar11 = (undefined4 *)*puVar11;
  iVar9 = *(int *)this;
  uVar2 = __divsf3(*puVar11,DAT_0013432c);
  (**(code **)(iVar9 + 0x2c))(this,uVar2);
  uVar2 = __divsf3(puVar11[1],DAT_00134330);
  (**(code **)(*(int *)this + 0x34))(this,uVar2);
  *(undefined4 *)(this + 0x110) = 0;
  (**(code **)(*(int *)this + 0x114))(this,1);
  local_2c = (_ccColor4B)0x0;
  local_2b = 0;
  local_2a = 0;
  local_29 = 0xff;
  uVar2 = cocos2d::CCLayerColor::layerWithColor(&local_2c);
  uVar13 = (**(code **)(*(int *)this + 0xcc))(this,uVar2,1,1);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  vDrawScript_Lode((char *)(DAT_00134334 + 0x134188),(char *)(DAT_00134338 + 0x13418a),
                   (CCNode *)this,local_20,local_1c,2,true,false);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
  puVar11 = (undefined4 *)(**(code **)(*piVar3 + 0xa8))();
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
  piVar12 = *(int **)*puVar11;
  pCVar4 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(extraout_s0);
  this_00 = (CCArray *)(**(code **)(*piVar3 + 0x58))(piVar3);
  if ((this_00 != (CCArray *)0x0) && (iVar9 = cocos2d::CCArray::count(this_00), iVar9 != 0)) {
    for (local_48 = 0; uVar6 = cocos2d::CCArray::count(this_00), local_48 < uVar6;
        local_48 = local_48 + 1) {
      piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar3,local_48);
      if (piVar5 != (int *)0x0) {
        iVar9 = cocos2d::CCNode::numberOfRunningActions();
        if (iVar9 != 0) {
          cocos2d::CCNode::stopAllActions();
        }
        if (piVar12[0x50] == 0) {
          if (local_48 != 0) {
            (**(code **)(*piVar5 + 0x6c))(piVar5);
          }
        }
        else {
          iVar9 = cocos2d::CCNode::numberOfRunningActions();
          if (iVar9 == 0) {
            (**(code **)(*piVar5 + 0x6c))(piVar5,1);
            iVar10 = *piVar12;
            iVar9 = __aeabi_fcmpeq(*(undefined4 *)(iVar10 + 0x4c),0);
            iVar7 = *piVar5;
            if (iVar9 == 0) {
              pcVar8 = *(code **)(iVar7 + 0xec);
              uVar2 = 0;
            }
            else {
              uVar2 = *(undefined4 *)(iVar10 + 0x60);
              iVar9 = __aeabi_fcmpeq(uVar2,0);
              if ((iVar9 != 0) || (iVar9 = __aeabi_fcmpeq(uVar2,DAT_0013433c), iVar9 != 0))
              goto LAB_00134268;
              uVar2 = 0xff;
              pcVar8 = *(code **)(iVar7 + 0xec);
            }
            (*pcVar8)(piVar5,uVar2);
LAB_00134268:
            uVar2 = *(undefined4 *)(*piVar12 + 100);
            iVar9 = __aeabi_fcmpeq(uVar2,DAT_00134340);
            if (iVar9 != 0) {
              uVar2 = 0;
            }
            (**(code **)(*piVar5 + 0x24))(piVar5,uVar2);
            iVar7 = *piVar12;
            uVar2 = *(undefined4 *)(iVar7 + 0x58);
            iVar9 = __aeabi_fcmpeq(uVar2,DAT_00134340);
            if (iVar9 == 0) {
              pcVar8 = *(code **)(*piVar5 + 0x2c);
            }
            else {
              uVar2 = *(undefined4 *)(iVar7 + 0x18);
              pcVar8 = *(code **)(*piVar5 + 0x2c);
            }
            (*pcVar8)(piVar5,uVar2);
            iVar7 = *piVar12;
            uVar2 = *(undefined4 *)(iVar7 + 0x5c);
            iVar9 = __aeabi_fcmpeq(uVar2,DAT_00134340);
            if (iVar9 == 0) {
              pcVar8 = *(code **)(*piVar5 + 0x34);
            }
            else {
              uVar2 = *(undefined4 *)(iVar7 + 0x1c);
              pcVar8 = *(code **)(*piVar5 + 0x34);
            }
            (*pcVar8)(piVar5,uVar2);
            uVar2 = cocos2d::CCObject::copy();
                    /* WARNING: Subroutine does not return */
            cocos2d::CCSequence::actions(pCVar4,uVar2,0);
          }
        }
      }
      piVar12 = piVar12 + 1;
    }
  }
  cocos2d::CCNode::scheduleUpdate((CCNode *)this);
  cocos2d::CCLayer::onEnter((CCLayer *)this);
  return;
}


