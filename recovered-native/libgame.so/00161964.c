/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00161964  Symbol: ~VolatileTexture */

/* cocos2d::VolatileTexture::~VolatileTexture() */

VolatileTexture * __thiscall cocos2d::VolatileTexture::~VolatileTexture(VolatileTexture *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  VolatileTexture *local_1c [2];
  
  puVar3 = *(undefined4 **)(DAT_001619d8 + 0x161970);
  puVar5 = (undefined4 *)*puVar3;
  puVar1 = puVar3;
  local_1c[0] = this;
  while (puVar4 = puVar1, puVar2 = puVar5, puVar2 != puVar3) {
    puVar5 = (undefined4 *)*puVar2;
    puVar1 = puVar4;
    if (((VolatileTexture *)puVar2[2] == local_1c[0]) &&
       (puVar1 = puVar2, (VolatileTexture **)(puVar2 + 2) != local_1c)) {
      FUN_001c5594(puVar2);
      operator_delete(puVar2);
      puVar1 = puVar4;
    }
  }
  if (puVar4 != puVar2) {
    FUN_001c5594(puVar4);
    operator_delete(puVar4);
  }
  FUN_001ed6b8(this + 0x30);
  FUN_001ed6b8(this + 0x2c);
  FUN_001ed6b8(this + 0x18);
  return this;
}


