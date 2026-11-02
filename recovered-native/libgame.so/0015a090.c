/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015a090  Symbol: updateTextureCoords */

/* cocos2d::CCSprite::updateTextureCoords(cocos2d::CCRect const&) */

void __thiscall cocos2d::CCSprite::updateTextureCoords(CCSprite *this,CCRect *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_24;
  
  if (this[0x128] == (CCSprite)0x0) {
    piVar1 = *(int **)(this + 0x124);
  }
  else {
    piVar1 = (int *)(**(code **)(**(int **)(this + 0x108) + 0x1c))();
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x18))(piVar1);
    uVar2 = __floatunsisf();
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    uVar3 = __floatunsisf();
    if (this[0x14c] == (CCSprite)0x0) {
      uVar4 = __divsf3(*param_1,uVar2);
      uVar2 = __divsf3(param_1[2],uVar2);
      local_24 = __addsf3(uVar4,uVar2);
      uVar5 = __divsf3(param_1[1],uVar3);
      uVar2 = __divsf3(param_1[3],uVar3);
      uVar3 = __addsf3(uVar5,uVar2);
      uVar2 = uVar4;
      if (this[0x1c4] != (CCSprite)0x0) {
        uVar2 = local_24;
        local_24 = uVar4;
      }
      uVar4 = uVar3;
      if (this[DAT_0015a1e8] != (CCSprite)0x0) {
        uVar4 = uVar5;
        uVar5 = uVar3;
      }
      *(undefined4 *)(this + 0x188) = uVar2;
      *(undefined4 *)(this + 0x18c) = uVar4;
      *(undefined4 *)(this + 0x1b8) = local_24;
      *(undefined4 *)(this + 0x1bc) = uVar4;
      *(undefined4 *)(this + 0x170) = uVar2;
      *(undefined4 *)(this + 0x174) = uVar5;
      *(undefined4 *)(this + 0x1a0) = local_24;
      *(undefined4 *)(this + 0x1a4) = uVar5;
    }
    else {
      uVar4 = __divsf3(*param_1,uVar2);
      uVar2 = __divsf3(param_1[3],uVar2);
      local_24 = __addsf3(uVar4,uVar2);
      uVar5 = __divsf3(param_1[1],uVar3);
      uVar2 = __divsf3(param_1[2],uVar3);
      uVar3 = __addsf3(uVar5,uVar2);
      uVar2 = uVar3;
      if (this[0x1c4] != (CCSprite)0x0) {
        uVar2 = uVar5;
        uVar5 = uVar3;
      }
      uVar3 = uVar4;
      if (this[DAT_0015a1e8] != (CCSprite)0x0) {
        uVar3 = local_24;
        local_24 = uVar4;
      }
      *(undefined4 *)(this + 0x188) = uVar3;
      *(undefined4 *)(this + 0x18c) = uVar5;
      *(undefined4 *)(this + 0x1b8) = uVar3;
      *(undefined4 *)(this + 0x1bc) = uVar2;
      *(undefined4 *)(this + 0x170) = local_24;
      *(undefined4 *)(this + 0x174) = uVar5;
      *(undefined4 *)(this + 0x1a0) = local_24;
      *(undefined4 *)(this + 0x1a4) = uVar2;
    }
  }
  return;
}


