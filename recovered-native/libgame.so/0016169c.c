/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016169c  Symbol: drawNumberOfQuads */

/* cocos2d::CCTextureAtlas::drawNumberOfQuads(unsigned int, unsigned int) */

undefined8 __thiscall
cocos2d::CCTextureAtlas::drawNumberOfQuads(CCTextureAtlas *this,uint param_1,uint param_2)

{
  undefined4 uVar1;
  CCTextureAtlas *pCVar2;
  uint uVar3;
  
  pCVar2 = this;
  if (param_1 != 0) {
    uVar3 = param_2;
    uVar1 = (**(code **)(**(int **)(this + 0x2c) + 0x20))();
    glBindTexture(DAT_00161750,uVar1);
    glBindBuffer(DAT_00161754,*(undefined4 *)(this + 0x18));
    glBufferData(DAT_00161754,*(int *)(this + 0x28) * 0x60,*(undefined4 *)(this + 0x30),DAT_00161758
                 ,pCVar2,param_2,uVar3);
    if (this[0x20] != (CCTextureAtlas)0x0) {
      glBufferSubData(DAT_00161754,param_2 * 0x60,param_1 * 0x60,
                      *(int *)(this + 0x30) + param_2 * 0x60);
      this[0x20] = (CCTextureAtlas)0x0;
    }
    glVertexPointer(3,DAT_0016175c,0x18,0);
    glColorPointer(4,DAT_00161760,0x18,0xc);
    glTexCoordPointer(2,DAT_0016175c,0x18,0x10);
    glBindBuffer(DAT_00161764,*(undefined4 *)(this + 0x1c));
    glBufferData(DAT_00161764,*(int *)(this + 0x28) * 0xc,*(undefined4 *)(this + 0x14),DAT_00161768)
    ;
    glDrawElements(4,param_1 * 6,DAT_0016176c,param_2 * 0xc);
    glBindBuffer(DAT_00161754,0);
    glBindBuffer(DAT_00161764,0);
  }
  return CONCAT44(param_2,pCVar2);
}


