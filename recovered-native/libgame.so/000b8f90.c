/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000b8f90  Symbol: ani_ani_test_Hero */

/* ani_ani_test_Hero(cocos2d::CCSprite*, _KG_Anit*) */

void ani_ani_test_Hero(CCSprite *param_1,_KG_Anit *param_2)

{
  undefined uVar1;
  CCArray *this;
  int iVar2;
  int *this_00;
  uint uVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint local_28;
  
  this = (CCArray *)(**(code **)(*(int *)param_1 + 0x58))();
  if ((this != (CCArray *)0x0) && (iVar2 = cocos2d::CCArray::count(this), iVar2 != 0)) {
    for (local_28 = 0; uVar3 = cocos2d::CCArray::count(this), local_28 < uVar3;
        local_28 = local_28 + 1) {
      this_00 = (int *)cocos2d::CCArray::objectAtIndex(this,local_28);
      iVar2 = __aeabi_fcmpeq(*(undefined4 *)(*(int *)param_2 + 0x4c),0);
      if (iVar2 == 0) {
        (**(code **)(*this_00 + 0xec))(this_00,0);
      }
      iVar2 = cocos2d::CCNode::numberOfRunningActions();
      if (iVar2 != 0) {
        cocos2d::CCNode::stopAllActions();
      }
      if (*(CCAction **)((int)param_2 + 0x140) == (CCAction *)0x0) {
        if (local_28 != 0) {
          (**(code **)(*this_00 + 0x6c))(this_00);
        }
      }
      else {
        (**(code **)(*this_00 + 0x6c))(this_00,1);
        uVar5 = *(undefined4 *)(*(int *)param_2 + 0x38);
        iVar2 = __aeabi_fcmpeq(uVar5,DAT_000b9130);
        iVar6 = *this_00;
        if (iVar2 == 0) {
          uVar1 = __fixunssfsi(uVar5);
          pcVar4 = *(code **)(iVar6 + 0xec);
        }
        else {
          pcVar4 = *(code **)(iVar6 + 0xec);
          uVar1 = 0;
        }
        (*pcVar4)(this_00,uVar1);
        iVar6 = *(int *)param_2;
        iVar2 = __aeabi_fcmpeq(*(undefined4 *)(iVar6 + 0x4c),0);
        iVar7 = *this_00;
        if (iVar2 == 0) {
          pcVar4 = *(code **)(iVar7 + 0xec);
          uVar5 = 0;
LAB_000b906a:
          (*pcVar4)(this_00,uVar5);
        }
        else {
          uVar5 = *(undefined4 *)(iVar6 + 0x60);
          iVar2 = __aeabi_fcmpeq(uVar5,0);
          if ((iVar2 == 0) && (iVar2 = __aeabi_fcmpeq(uVar5,DAT_000b9134), iVar2 == 0)) {
            pcVar4 = *(code **)(iVar7 + 0xec);
            uVar5 = 0xff;
            goto LAB_000b906a;
          }
        }
        iVar6 = *(int *)param_2;
        uVar5 = *(undefined4 *)(iVar6 + 0x3c);
        iVar2 = __aeabi_fcmpeq(uVar5,DAT_000b9130);
        iVar7 = *this_00;
        if (iVar2 == 0) {
          (**(code **)(iVar7 + 0x24))(this_00,uVar5);
          uVar5 = *(undefined4 *)(*(int *)param_2 + 100);
          iVar2 = __aeabi_fcmpeq(uVar5,DAT_000b9130);
          if (iVar2 == 0) {
            pcVar4 = *(code **)(*this_00 + 0x24);
            goto LAB_000b90b6;
          }
        }
        else {
          uVar5 = *(undefined4 *)(iVar6 + 100);
          iVar2 = __aeabi_fcmpeq(uVar5,DAT_000b9130);
          pcVar4 = *(code **)(iVar7 + 0x24);
          if (iVar2 != 0) {
            uVar5 = 0;
          }
LAB_000b90b6:
          (*pcVar4)(this_00,uVar5);
        }
        iVar6 = *(int *)param_2;
        uVar5 = *(undefined4 *)(iVar6 + 0x58);
        iVar2 = __aeabi_fcmpeq(uVar5,DAT_000b9130);
        if (iVar2 == 0) {
          pcVar4 = *(code **)(*this_00 + 0x2c);
        }
        else {
          uVar5 = *(undefined4 *)(iVar6 + 0x18);
          pcVar4 = *(code **)(*this_00 + 0x2c);
        }
        (*pcVar4)(this_00,uVar5);
        iVar6 = *(int *)param_2;
        uVar5 = *(undefined4 *)(iVar6 + 0x5c);
        iVar2 = __aeabi_fcmpeq(uVar5,DAT_000b9130);
        if (iVar2 == 0) {
          pcVar4 = *(code **)(*this_00 + 0x34);
        }
        else {
          uVar5 = *(undefined4 *)(iVar6 + 0x1c);
          pcVar4 = *(code **)(*this_00 + 0x34);
        }
        (*pcVar4)(this_00,uVar5);
        cocos2d::CCNode::runAction((CCNode *)this_00,*(CCAction **)((int)param_2 + 0x140));
      }
      param_2 = (_KG_Anit *)((int)param_2 + 4);
    }
  }
  return;
}


