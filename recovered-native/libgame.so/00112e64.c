/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00112e64  Symbol: SetKnockBack */

/* SetKnockBack(cocos2d::CCLayer*, float) */

undefined8 SetKnockBack(CCLayer *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  CCLayer *pCVar3;
  int in_r1;
  int *piVar4;
  float extraout_s0;
  float extraout_s0_00;
  float fVar5;
  float extraout_s1;
  float extraout_s1_00;
  float fVar6;
  int local_1c;
  
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
  local_1c = in_r1;
  if (iVar1 != 0) {
    piVar4 = *(int **)(iVar1 + 4);
    local_1c = *piVar4;
    if ((((local_1c != 3) && (piVar4[1] != *(int *)(**(int **)(DAT_00112f10 + 0x112e88) + 0x2c))) &&
        (piVar4[1] != DAT_00112f14)) && (iVar2 = __aeabi_fcmpgt(piVar4[9],0), iVar2 != 0)) {
      if (*(char *)(piVar4 + 0x27) == '\0') {
        if (1 < local_1c - 4U) {
          pCVar3 = param_1;
          fVar5 = extraout_s0;
          fVar6 = extraout_s1;
          if (local_1c - 2U < 2) {
            pCVar3 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,1);
            fVar5 = extraout_s0_00;
            fVar6 = extraout_s1_00;
          }
          ani_KnockBack_ani(pCVar3,fVar5,fVar6);
          *(undefined *)(*(int *)(iVar1 + 4) + 0x9c) = 1;
          *(int *)(*(int *)(iVar1 + 4) + 0xa4) = in_r1;
          *(undefined4 *)(*(int *)(iVar1 + 4) + 0xa0) = 0;
          *(undefined *)(*(int *)(iVar1 + 4) + 0xd) = 0;
          *(undefined *)(*(int *)(iVar1 + 4) + 0x2c) = 0;
          *(undefined4 *)(*(int *)(iVar1 + 4) + 0x3c) = 0;
        }
      }
      else {
        iVar2 = __aeabi_fcmplt(piVar4[0x29],in_r1);
        if (iVar2 != 0) {
          piVar4[0x29] = in_r1;
          *(undefined4 *)(*(int *)(iVar1 + 4) + 0xa0) = 0;
        }
      }
    }
  }
  return CONCAT44(local_1c,param_1);
}


