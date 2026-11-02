/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000b9728  Symbol: ani_ani_Speed */

/* ani_ani_Speed(cocos2d::CCSprite*, _KG_Anit*, float) */

void ani_ani_Speed(CCSprite *param_1,_KG_Anit *param_2,float param_3)

{
  bool bVar1;
  CCArray *this;
  int iVar2;
  int iVar3;
  CCPoint CVar4;
  uint uVar5;
  undefined4 in_r2;
  undefined4 uVar6;
  float extraout_s0;
  undefined8 uVar7;
  float extraout_s2;
  float extraout_s2_00;
  int local_b4;
  uint local_a8;
  CCSize local_84;
  undefined4 local_80;
  CCSize local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  CCFiniteTimeAction *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  this = (CCArray *)(**(code **)(*(int *)param_1 + 0x58))();
  if ((this != (CCArray *)0x0) && (iVar2 = cocos2d::CCArray::count(this), iVar2 != 0)) {
    for (local_a8 = 0; uVar5 = cocos2d::CCArray::count(this), local_a8 < uVar5;
        local_a8 = local_a8 + 1) {
      cocos2d::CCArray::objectAtIndex(this,local_a8);
      memset(&local_68,0,0x50);
      memset(&local_74,0,0xc);
      local_b4 = 0;
      iVar2 = *(int *)(*(int *)param_2 + 0x40);
      bVar1 = false;
      while( true ) {
        if (iVar2 <= local_b4) break;
        if (local_b4 != 0) {
LAB_000b97a4:
          iVar3 = *(int *)param_2;
          uVar6 = *(undefined4 *)(iVar3 + local_b4 * 0x1c + 0x4c);
          iVar2 = __aeabi_fcmpeq(uVar6,0);
          if (iVar2 == 0) {
            local_74 = __subsf3(uVar6,local_70);
            local_70 = uVar6;
          }
          else {
            local_74 = DAT_000b9af4;
            local_70 = DAT_000b9af4;
          }
          if (!bVar1) {
            CVar4 = __mulsf3(in_r2,local_74);
            iVar2 = iVar3 + local_b4 * 0x1c;
            uVar6 = __mulsf3(*(undefined4 *)(iVar2 + 0x50),0x3f000000);
            __addsf3(uVar6,*(undefined4 *)(iVar3 + 0x20));
            uVar6 = __mulsf3(*(undefined4 *)(iVar2 + 0x54),0x3f000000);
            uVar7 = __subsf3(*(undefined4 *)(iVar3 + 0x24),uVar6);
            uVar7 = cocos2d::CCPoint::CCPoint
                              ((CCPoint *)&local_7c,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
                    /* WARNING: Subroutine does not return */
            KG_action((float)uVar7,CVar4,local_7c,(float)((ulonglong)uVar7 >> 0x20),extraout_s2_00,
                      (bool)(undefined)local_78,
                      *(_KG_Anit **)(*(int *)param_2 + local_b4 * 0x1c + 0x58));
          }
          CVar4 = __mulsf3(in_r2,local_74);
          iVar2 = iVar3 + local_b4 * 0x1c;
          uVar6 = __mulsf3(*(undefined4 *)(iVar2 + 0x50),0x3f000000);
          __addsf3(uVar6,*(undefined4 *)(iVar3 + 0x20));
          uVar6 = __mulsf3(*(undefined4 *)(iVar2 + 0x54),0x3f000000);
          uVar7 = __subsf3(*(undefined4 *)(iVar3 + 0x24),uVar6);
          uVar7 = cocos2d::CCPoint::CCPoint
                            ((CCPoint *)&local_84,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
                    /* WARNING: Subroutine does not return */
          KG_action((float)uVar7,CVar4,local_84,(float)((ulonglong)uVar7 >> 0x20),extraout_s2,
                    (bool)(undefined)local_80,
                    *(_KG_Anit **)(*(int *)param_2 + local_b4 * 0x1c + 0x58));
        }
        uVar6 = *(undefined4 *)(*(int *)param_2 + 0x4c);
        iVar3 = __aeabi_fcmpgt(uVar6,0);
        if (iVar3 == 0) goto LAB_000b97a4;
        local_70 = uVar6;
        local_68 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(extraout_s0);
        bVar1 = true;
        local_b4 = 1;
      }
      if (local_68 != (CCFiniteTimeAction *)0x0) {
        if (iVar2 == 1) {
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(local_68,0);
        }
        if (iVar2 == 2) {
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(local_68,local_64,0);
        }
        if (iVar2 == 3) {
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(local_68,local_64,local_60,0);
        }
        if (iVar2 == 4) {
          local_58 = 0;
LAB_000b9934:
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(local_68,local_64,local_60,local_5c,local_58);
        }
        if (iVar2 == 5) goto LAB_000b9934;
        if (iVar2 == 6) {
          local_50 = 0;
LAB_000b996c:
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions
                    (local_68,local_64,local_60,local_5c,local_58,local_54,local_50);
        }
        if (iVar2 == 7) goto LAB_000b996c;
        if (iVar2 == 8) {
          local_48 = 0;
LAB_000b99b4:
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions
                    (local_68,local_64,local_60,local_5c,local_58,local_54,local_50,local_4c,
                     local_48);
        }
        if (iVar2 == 9) goto LAB_000b99b4;
        if (iVar2 == 10) {
          local_40 = 0;
LAB_000b9a0c:
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions
                    (local_68,local_64,local_60,local_5c,local_58,local_54,local_50,local_4c,
                     local_48,local_44,local_40);
        }
        if (iVar2 == 0xb) goto LAB_000b9a0c;
        if (iVar2 == 0xc) {
          local_38 = 0;
LAB_000b9a74:
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions
                    (local_68,local_64,local_60,local_5c,local_58,local_54,local_50,local_4c,
                     local_48,local_44,local_40,local_3c,local_38);
        }
        if (iVar2 == 0xd) goto LAB_000b9a74;
        if (iVar2 == 0xe) {
          local_30 = 0;
LAB_000b9aec:
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions
                    (local_68,local_64,local_60,local_5c,local_58,local_54,local_50,local_4c,
                     local_48,local_44,local_40,local_3c,local_38,local_34,local_30);
        }
        if (iVar2 == 0xf) goto LAB_000b9aec;
        if (iVar2 == 0x10) {
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions
                    (local_68,local_64,local_60,local_5c,local_58,local_54,local_50,local_4c,
                     local_48,local_44,local_40,local_3c,local_38,local_34,local_30,local_2c,0);
        }
      }
      param_2 = (_KG_Anit *)((int)param_2 + 4);
    }
  }
  return;
}


