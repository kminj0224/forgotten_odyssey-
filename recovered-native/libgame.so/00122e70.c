/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00122e70  Symbol: Hero_Skill_Control */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00122f2a) */
/* WARNING: Removing unreachable block (ram,0x00122f2a) */
/* GameScene::Hero_Skill_Control(float) */

undefined8 __thiscall GameScene::Hero_Skill_Control(GameScene *this,float param_1)

{
  void *pvVar1;
  CCLayer *pCVar2;
  CCLayer *in_r1;
  int iVar3;
  int **ppiVar4;
  int *piVar5;
  float extraout_s0;
  float fVar6;
  float extraout_s0_00;
  
  ppiVar4 = *(int ***)(DAT_00122fb8 + 0x122e7c);
  pvVar1 = (void *)(**(code **)(**ppiVar4 + 0xa8))();
  fVar6 = extraout_s0;
  if (*(int *)(*(int *)((int)pvVar1 + 4) + 4) - 1U < 2) {
    fVar6 = (float)Hero_Skill_Button_Effect(pvVar1);
  }
  piVar5 = *(int **)((int)pvVar1 + 4);
  iVar3 = piVar5[0x19];
  if ((((iVar3 + 1U < 2) || (iVar3 == 1)) || (*(char *)((int)piVar5 + 0x93) != '\0')) ||
     ((*(char *)((int)piVar5 + 0x85) != '\0' || (*(char *)(piVar5 + 0x27) != '\0')))) {
    if (*(char *)((int)piVar5 + 0x93) == '\0') {
      if ((*(char *)((int)piVar5 + 0x85) == '\0') && (*(char *)(piVar5 + 0x27) == '\0')) {
        if (**(char **)(DAT_00122fbc + 0x122ee4) == '\0') {
          Hero_Move_Control((CCNode *)this,fVar6);
        }
      }
      else if (*(char *)(piVar5 + 0x27) != '\0') {
        KnockBack_Call_Back(fVar6,in_r1);
      }
    }
    else {
      Stun_Call_Back(fVar6,in_r1);
    }
  }
  else if (iVar3 < 2) {
    if ((**(int **)(DAT_00122fc4 + 0x122f8c) == 0) && (*piVar5 == 2)) {
      piVar5[0xf] = 0;
      pCVar2 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar4,1);
      ani_Base_ani(pCVar2);
      (**(code **)(**ppiVar4 + 0x2c))(*ppiVar4,0x3f800000);
    }
  }
  else {
    iVar3 = __aeabi_fcmpgt(piVar5[9],0);
    if (iVar3 != 0) {
      switch(piVar5[1]) {
      case 1:
        Hero_Kai_Control((CCNode *)this,extraout_s0_00,in_r1);
        break;
      case 2:
        Hero_Rapael_Control((CCNode *)this,extraout_s0_00,in_r1);
        break;
      case 3:
        Hero_Kris_Control((CCNode *)this,extraout_s0_00,in_r1);
        break;
      case 4:
        Hero_Reina_Control((CCNode *)this,extraout_s0_00,in_r1);
        break;
      case 5:
        Hero_Mir_Control((CCNode *)this,extraout_s0_00,in_r1);
        break;
      case 6:
        Hero_Agasa_Control((CCNode *)this,extraout_s0_00,in_r1);
        break;
      case 7:
        Hero_Sia_Control((CCNode *)this,extraout_s0_00,in_r1);
        break;
      case 8:
        Hero_Tao_Control((CCNode *)this,extraout_s0_00,in_r1);
      }
    }
  }
  return CONCAT44(pvVar1,this);
}


