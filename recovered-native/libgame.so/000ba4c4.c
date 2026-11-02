/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ba4c4  Symbol: ani_ani_R */

/* ani_ani_R(cocos2d::CCSprite*, _KG_Anit*) */

void ani_ani_R(CCSprite *param_1,_KG_Anit *param_2)

{
  bool bVar1;
  CCFiniteTimeAction *pCVar2;
  CCArray *this;
  int iVar3;
  int iVar4;
  uint uVar5;
  _KG_Anit *p_Var6;
  undefined4 uVar7;
  CCPoint CVar8;
  float extraout_s0;
  undefined8 uVar9;
  float extraout_s2;
  float extraout_s2_00;
  float fVar10;
  float extraout_s2_01;
  float extraout_s2_02;
  int local_e4;
  uint local_d0;
  CCSize local_bc;
  undefined4 local_b8;
  CCSize local_b4;
  undefined4 local_b0;
  CCSize local_ac;
  undefined4 local_a8;
  CCSize local_a4;
  undefined4 local_a0;
  CCPoint local_9c;
  CCPoint local_98;
  CCFiniteTimeAction *local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
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
  
  this = (CCArray *)(**(code **)(*(int *)param_1 + 0x58))();
  if ((this != (CCArray *)0x0) && (iVar3 = cocos2d::CCArray::count(this), iVar3 != 0)) {
    for (local_d0 = 0; uVar5 = cocos2d::CCArray::count(this), local_d0 < uVar5;
        local_d0 = local_d0 + 1) {
      cocos2d::CCArray::objectAtIndex(this,local_d0);
      iVar3 = cocos2d::CCNode::numberOfRunningActions();
      if (iVar3 == 0) {
        memset(&local_90,0,0x78);
        memset(&local_9c,0,0xc);
        iVar3 = *(int *)(*(int *)param_2 + 0x40);
        bVar1 = false;
        local_e4 = 0;
        while( true ) {
          pCVar2 = local_90;
          if (iVar3 <= local_e4) break;
          if (local_e4 != 0) {
LAB_000ba548:
            iVar4 = *(int *)param_2;
            CVar8 = *(CCPoint *)(iVar4 + local_e4 * 0x1c + 0x4c);
            iVar3 = __aeabi_fcmpeq(CVar8,0);
            if (iVar3 == 0) {
              local_9c = __subsf3(CVar8,local_98);
              local_98 = CVar8;
            }
            else {
              local_9c = DAT_000ba8e4;
              local_98 = DAT_000ba8e4;
            }
            CVar8 = local_9c;
            if (!bVar1) {
              if (**(int **)(DAT_000ba8e8 + 0xba57c) == 2) {
                iVar3 = iVar4 + local_e4 * 0x1c;
                __addsf3(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar3 + 0x50));
                uVar9 = __subsf3(*(undefined4 *)(iVar4 + 0x24),*(undefined4 *)(iVar3 + 0x54));
                uVar9 = cocos2d::CCPoint::CCPoint
                                  ((CCPoint *)&local_ac,(float)uVar9,
                                   (float)((ulonglong)uVar9 >> 0x20));
                p_Var6 = *(_KG_Anit **)(*(int *)param_2 + local_e4 * 0x1c + 0x58);
                fVar10 = extraout_s2_01;
              }
              else {
                iVar3 = iVar4 + local_e4 * 0x1c;
                uVar7 = __mulsf3(*(undefined4 *)(iVar3 + 0x50),0x3f000000);
                __addsf3(uVar7,*(undefined4 *)(iVar4 + 0x20));
                uVar7 = __mulsf3(*(undefined4 *)(iVar3 + 0x54),0x3f000000);
                uVar9 = __subsf3(*(undefined4 *)(iVar4 + 0x24),uVar7);
                uVar9 = cocos2d::CCPoint::CCPoint
                                  ((CCPoint *)&local_a4,(float)uVar9,
                                   (float)((ulonglong)uVar9 >> 0x20));
                p_Var6 = *(_KG_Anit **)(*(int *)param_2 + local_e4 * 0x1c + 0x58);
                local_ac = local_a4;
                fVar10 = extraout_s2_02;
                local_a8._0_1_ = (undefined)local_a0;
              }
                    /* WARNING: Subroutine does not return */
              KG_action((float)uVar9,CVar8,local_ac,(float)((ulonglong)uVar9 >> 0x20),fVar10,
                        (bool)(undefined)local_a8,p_Var6);
            }
            if (**(int **)(DAT_000ba8e8 + 0xba57c) == 2) {
              iVar3 = iVar4 + local_e4 * 0x1c;
              __addsf3(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar3 + 0x50));
              uVar9 = __subsf3(*(undefined4 *)(iVar4 + 0x24),*(undefined4 *)(iVar3 + 0x54));
              uVar9 = cocos2d::CCPoint::CCPoint
                                ((CCPoint *)&local_bc,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20)
                                );
              p_Var6 = *(_KG_Anit **)(*(int *)param_2 + local_e4 * 0x1c + 0x58);
              fVar10 = extraout_s2;
            }
            else {
              iVar3 = iVar4 + local_e4 * 0x1c;
              uVar7 = __mulsf3(*(undefined4 *)(iVar3 + 0x50),0x3f000000);
              __addsf3(uVar7,*(undefined4 *)(iVar4 + 0x20));
              uVar7 = __mulsf3(*(undefined4 *)(iVar3 + 0x54),0x3f000000);
              uVar9 = __subsf3(*(undefined4 *)(iVar4 + 0x24),uVar7);
              uVar9 = cocos2d::CCPoint::CCPoint
                                ((CCPoint *)&local_b4,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20)
                                );
              p_Var6 = *(_KG_Anit **)(*(int *)param_2 + local_e4 * 0x1c + 0x58);
              local_bc = local_b4;
              fVar10 = extraout_s2_00;
              local_b8._0_1_ = (undefined)local_b0;
            }
                    /* WARNING: Subroutine does not return */
            KG_action((float)uVar9,CVar8,local_bc,(float)((ulonglong)uVar9 >> 0x20),fVar10,
                      (bool)(undefined)local_b8,p_Var6);
          }
          uVar7 = *(undefined4 *)(*(int *)param_2 + 0x4c);
          iVar4 = __aeabi_fcmpgt(uVar7,0);
          if (iVar4 == 0) goto LAB_000ba548;
          local_98 = uVar7;
          local_90 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(extraout_s0);
          bVar1 = true;
          local_e4 = 1;
        }
        if ((local_90 != (CCFiniteTimeAction *)0x0) &&
           (iVar4 = cocos2d::CCNode::numberOfRunningActions(), iVar4 == 0)) {
          if (iVar3 == 1) {
                    /* WARNING: Subroutine does not return */
            cocos2d::CCSequence::actions(pCVar2,0);
          }
          if (iVar3 == 2) {
                    /* WARNING: Subroutine does not return */
            cocos2d::CCSequence::actions(pCVar2,local_8c,0);
          }
          if (iVar3 == 3) {
                    /* WARNING: Subroutine does not return */
            cocos2d::CCSequence::actions(pCVar2,local_8c,local_88);
          }
          if (iVar3 == 4) {
            local_80 = 0;
LAB_000ba782:
                    /* WARNING: Subroutine does not return */
            cocos2d::CCSequence::actions(pCVar2,local_8c,local_88,local_84,local_80);
          }
          if (iVar3 == 5) goto LAB_000ba782;
          if (iVar3 == 6) {
            local_78 = 0;
LAB_000ba7c2:
                    /* WARNING: Subroutine does not return */
            cocos2d::CCSequence::actions
                      (pCVar2,local_8c,local_88,local_84,local_80,local_7c,local_78);
          }
          if (iVar3 == 7) goto LAB_000ba7c2;
          if (iVar3 == 8) {
            local_70 = 0;
LAB_000ba80a:
                    /* WARNING: Subroutine does not return */
            cocos2d::CCSequence::actions
                      (pCVar2,local_8c,local_88,local_84,local_80,local_7c,local_78,local_74,
                       local_70);
          }
          if (iVar3 == 9) goto LAB_000ba80a;
          if (iVar3 == 10) {
                    /* WARNING: Subroutine does not return */
            cocos2d::CCSequence::actions
                      (pCVar2,local_8c,local_88,local_84,local_80,local_7c,local_78,local_74,
                       local_70,local_6c,0);
          }
          if (iVar3 == 0xb) {
            local_60 = 0;
LAB_000ba8a2:
                    /* WARNING: Subroutine does not return */
            cocos2d::CCSequence::actions
                      (pCVar2,local_8c,local_88,local_84,local_80,local_7c,local_78,local_74,
                       local_70,local_6c,local_68,local_64,local_60);
          }
          if (iVar3 == 0xc) goto LAB_000ba8a2;
          if (iVar3 == 0xd) {
            local_58 = 0;
LAB_000ba926:
                    /* WARNING: Subroutine does not return */
            cocos2d::CCSequence::actions
                      (pCVar2,local_8c,local_88,local_84,local_80,local_7c,local_78,local_74,
                       local_70,local_6c,local_68,local_64,local_60,local_5c,local_58);
          }
          if (iVar3 == 0xe) goto LAB_000ba926;
          if (iVar3 == 0xf) {
            local_50 = 0;
LAB_000ba9b0:
                    /* WARNING: Subroutine does not return */
            cocos2d::CCSequence::actions
                      (pCVar2,local_8c,local_88,local_84,local_80,local_7c,local_78,local_74,
                       local_70,local_6c,local_68,local_64,local_60,local_5c,local_58,local_54,
                       local_50);
          }
          if (iVar3 == 0x10) goto LAB_000ba9b0;
          if (iVar3 == 0x11) {
            local_48 = 0;
LAB_000baa4a:
                    /* WARNING: Subroutine does not return */
            cocos2d::CCSequence::actions
                      (pCVar2,local_8c,local_88,local_84,local_80,local_7c,local_78,local_74,
                       local_70,local_6c,local_68,local_64,local_60,local_5c,local_58,local_54,
                       local_50,local_4c,local_48);
          }
          if (iVar3 == 0x12) goto LAB_000baa4a;
          if (iVar3 == 0x13) {
            local_40 = 0;
LAB_000baaf4:
                    /* WARNING: Subroutine does not return */
            cocos2d::CCSequence::actions
                      (pCVar2,local_8c,local_88,local_84,local_80,local_7c,local_78,local_74,
                       local_70,local_6c,local_68,local_64,local_60,local_5c,local_58,local_54,
                       local_50,local_4c,local_48,local_44,local_40);
          }
          if (iVar3 == 0x14) goto LAB_000baaf4;
        }
      }
      param_2 = (_KG_Anit *)((int)param_2 + 4);
    }
  }
  return;
}


