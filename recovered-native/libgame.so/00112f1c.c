/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00112f1c  Symbol: SetKnockBack2 */

/* SetKnockBack2(cocos2d::CCLayer*, float) */

void SetKnockBack2(CCLayer *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int in_r1;
  int *piVar3;
  float extraout_s0;
  float extraout_s0_00;
  float fVar4;
  float extraout_s1;
  float extraout_s1_00;
  float fVar5;
  
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
  if (iVar1 != 0) {
    piVar3 = *(int **)(iVar1 + 4);
    if (((piVar3[1] != *(int *)(**(int **)(DAT_00112fc0 + 0x112f36) + 0x2c)) &&
        (piVar3[1] != *(int *)(**(int **)(DAT_00112fc0 + 0x112f36) + 0x30))) &&
       (iVar2 = __aeabi_fcmpgt(piVar3[9],0), iVar2 != 0)) {
      if (*(char *)(piVar3 + 0x27) == '\0') {
        if (1 < *piVar3 - 4U) {
          fVar4 = extraout_s0;
          fVar5 = extraout_s1;
          if (*piVar3 - 2U < 2) {
            param_1 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,1);
            fVar4 = extraout_s0_00;
            fVar5 = extraout_s1_00;
          }
          ani_KnockBack2_ani(param_1,fVar4,fVar5);
          *(undefined *)(*(int *)(iVar1 + 4) + 0x9c) = 1;
          *(int *)(*(int *)(iVar1 + 4) + 0xa4) = in_r1;
          *(undefined4 *)(*(int *)(iVar1 + 4) + 0xa0) = 0;
          *(undefined *)(*(int *)(iVar1 + 4) + 0xd) = 0;
          *(undefined *)(*(int *)(iVar1 + 4) + 0x2c) = 0;
          *(undefined4 *)(*(int *)(iVar1 + 4) + 0x3c) = 0;
        }
      }
      else {
        iVar2 = __aeabi_fcmplt(piVar3[0x29],in_r1);
        if (iVar2 != 0) {
          piVar3[0x29] = in_r1;
          *(undefined4 *)(*(int *)(iVar1 + 4) + 0xa0) = 0;
        }
      }
    }
  }
  return;
}


