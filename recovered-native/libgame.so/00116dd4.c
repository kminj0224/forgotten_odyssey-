/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00116dd4  Symbol: setForce */

/* CParticle::setForce(float, float, float) */

void __thiscall CParticle::setForce(CParticle *this,float param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)this;
  uVar1 = __divsf3(in_r1,uVar2);
  *(undefined4 *)(this + 0x20) = uVar1;
  uVar1 = __divsf3(in_r2,uVar2);
  *(undefined4 *)(this + 0x24) = uVar1;
  uVar1 = __divsf3(in_r3,uVar2);
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}


