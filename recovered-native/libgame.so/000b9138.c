/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000b9138  Symbol: ani_ani_test */

/* ani_ani_test(cocos2d::CCSprite*, _KG_Anit*) */

void ani_ani_test(CCSprite *param_1,_KG_Anit *param_2)

{
  CCArray *this;
  int iVar1;
  int *this_00;
  CCObject *this_01;
  uint uVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int local_2c;
  uint local_28;
  
  this = (CCArray *)(**(code **)(*(int *)param_1 + 0x58))();
  if ((this != (CCArray *)0x0) && (iVar1 = cocos2d::CCArray::count(this), iVar1 != 0)) {
    for (local_28 = 0; uVar2 = cocos2d::CCArray::count(this), local_28 < uVar2;
        local_28 = local_28 + 1) {
      this_00 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,local_28);
      if (this_00 != (int *)0x0) {
        iVar1 = cocos2d::CCNode::numberOfRunningActions();
        if (iVar1 != 0) {
          cocos2d::CCNode::stopAllActions();
        }
        if (*(int *)((int)param_2 + 0x140) == 0) {
          if (local_28 != 0) {
            (**(code **)(*this_00 + 0x6c))(this_00);
          }
        }
        else {
          iVar1 = cocos2d::CCNode::numberOfRunningActions();
          if (iVar1 == 0) {
            (**(code **)(*this_00 + 0x6c))(this_00,1);
            iVar1 = __aeabi_fcmpeq(*(undefined4 *)(*(int *)param_2 + 0x38),DAT_000b92ec);
            if (iVar1 == 0) {
              (**(code **)(*this_00 + 0xec))(this_00,0xff);
              iVar5 = *(int *)param_2;
              iVar1 = __aeabi_fcmpeq(*(undefined4 *)(iVar5 + 0x4c),0);
              local_2c = *this_00;
              if (iVar1 != 0) goto LAB_000b91f4;
LAB_000b91ea:
              pcVar4 = *(code **)(local_2c + 0xec);
              uVar3 = 0;
LAB_000b9218:
              (*pcVar4)(this_00,uVar3);
            }
            else {
              (**(code **)(*this_00 + 0xec))(this_00,0);
              iVar5 = *(int *)param_2;
              iVar1 = __aeabi_fcmpeq(*(undefined4 *)(iVar5 + 0x4c),0);
              local_2c = *this_00;
              if (iVar1 == 0) goto LAB_000b91ea;
LAB_000b91f4:
              uVar3 = *(undefined4 *)(iVar5 + 0x60);
              iVar1 = __aeabi_fcmpeq(uVar3,0);
              if ((iVar1 == 0) && (iVar1 = __aeabi_fcmpeq(uVar3,DAT_000b92f0), iVar1 == 0)) {
                uVar3 = 0xff;
                pcVar4 = *(code **)(local_2c + 0xec);
                goto LAB_000b9218;
              }
            }
            iVar5 = *(int *)param_2;
            uVar3 = *(undefined4 *)(iVar5 + 0x3c);
            iVar1 = __aeabi_fcmpeq(uVar3,DAT_000b92ec);
            iVar6 = *this_00;
            if (iVar1 == 0) {
              (**(code **)(iVar6 + 0x24))(this_00,uVar3);
              uVar3 = *(undefined4 *)(*(int *)param_2 + 100);
              iVar1 = __aeabi_fcmpeq(uVar3,DAT_000b92ec);
              if (iVar1 == 0) {
                pcVar4 = *(code **)(*this_00 + 0x24);
                goto LAB_000b9264;
              }
            }
            else {
              uVar3 = *(undefined4 *)(iVar5 + 100);
              iVar1 = __aeabi_fcmpeq(uVar3,DAT_000b92ec);
              pcVar4 = *(code **)(iVar6 + 0x24);
              if (iVar1 != 0) {
                uVar3 = 0;
              }
LAB_000b9264:
              (*pcVar4)(this_00,uVar3);
            }
            iVar5 = *(int *)param_2;
            uVar3 = *(undefined4 *)(iVar5 + 0x58);
            iVar1 = __aeabi_fcmpeq(uVar3,DAT_000b92ec);
            if (iVar1 == 0) {
              pcVar4 = *(code **)(*this_00 + 0x2c);
            }
            else {
              uVar3 = *(undefined4 *)(iVar5 + 0x18);
              pcVar4 = *(code **)(*this_00 + 0x2c);
            }
            (*pcVar4)(this_00,uVar3);
            iVar5 = *(int *)param_2;
            uVar3 = *(undefined4 *)(iVar5 + 0x5c);
            iVar1 = __aeabi_fcmpeq(uVar3,DAT_000b92ec);
            if (iVar1 == 0) {
              pcVar4 = *(code **)(*this_00 + 0x34);
            }
            else {
              uVar3 = *(undefined4 *)(iVar5 + 0x1c);
              pcVar4 = *(code **)(*this_00 + 0x34);
            }
            (*pcVar4)(this_00,uVar3);
            this_01 = (CCObject *)cocos2d::CCObject::copy();
            cocos2d::CCNode::runAction((CCNode *)this_00,(CCAction *)this_01);
            cocos2d::CCObject::release(this_01);
          }
        }
      }
      param_2 = (_KG_Anit *)((int)param_2 + 4);
    }
  }
  return;
}


