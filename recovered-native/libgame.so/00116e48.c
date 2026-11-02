/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00116e48  Symbol: addAcc */

/* CParticle::addAcc(float, float, float) */

void __thiscall CParticle::addAcc(CParticle *this,float param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  undefined4 in_r2;
  undefined4 in_r3;
  
  uVar1 = __addsf3(*(undefined4 *)(this + 0x20));
  *(undefined4 *)(this + 0x20) = uVar1;
  uVar1 = __addsf3(*(undefined4 *)(this + 0x24),in_r2);
  *(undefined4 *)(this + 0x24) = uVar1;
  uVar1 = __addsf3(*(undefined4 *)(this + 0x28),in_r3);
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}


