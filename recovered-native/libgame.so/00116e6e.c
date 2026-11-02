/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00116e6e  Symbol: collideWithSphere */

/* CParticle::collideWithSphere(float, float*, float&) */

bool __thiscall
CParticle::collideWithSphere(CParticle *this,float param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  undefined4 *in_r3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_stack_ffffffd8;
  
  uVar4 = *(undefined4 *)(this + 0xc);
  uVar5 = *(undefined4 *)(this + 0x10);
  uVar1 = __mulsf3(param_1,*(undefined4 *)(this + 8));
  uVar4 = __mulsf3(uVar4,uVar4);
  uVar1 = __addsf3(uVar1,uVar4);
  uVar4 = __mulsf3(uVar5,uVar5);
  __addsf3(uVar1,uVar4);
  __extendsfdf2();
  sqrt((double)CONCAT44(param_2,in_stack_ffffffd8));
  uVar1 = __truncdfsf2();
  iVar2 = __aeabi_fcmplt(param_2,uVar1);
  if (iVar2 != 0) {
    fVar3 = (float)__divsf3(*(int *)(this + 8) + -0x80000000,uVar1);
    *param_3 = fVar3;
    fVar3 = (float)__divsf3(*(int *)(this + 0xc) + -0x80000000,uVar1);
    param_3[1] = fVar3;
    fVar3 = (float)__divsf3(*(int *)(this + 0x10) + -0x80000000,uVar1);
    param_3[2] = fVar3;
    uVar1 = __subsf3(uVar1,param_2);
    *in_r3 = uVar1;
  }
  return iVar2 != 0;
}


