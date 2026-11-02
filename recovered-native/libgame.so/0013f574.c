/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013f574  Symbol: update */

/* cocos2d::CCActionManager::update(float) */

undefined8 __thiscall cocos2d::CCActionManager::update(CCActionManager *this,float param_1)

{
  int *this_00;
  int iVar1;
  undefined4 in_r1;
  uint **ppuVar2;
  int iVar3;
  float extraout_s0;
  
  iVar3 = *(int *)(this + 0x14);
  while (*(int *)(this + 0x18) = iVar3, iVar3 != 0) {
    this[0x1c] = (CCActionManager)0x0;
    if (*(char *)(iVar3 + 0x11) == '\0') {
      *(undefined4 *)(iVar3 + 8) = 0;
      while( true ) {
        ppuVar2 = *(uint ***)(this + 0x18);
        if ((uint *)**ppuVar2 <= ppuVar2[2]) break;
        ppuVar2[3] = *(uint **)((int)ppuVar2[2] * 4 + (*ppuVar2)[2]);
        if (*(int *)(*(int *)(this + 0x18) + 0xc) != 0) {
          *(undefined *)(*(int *)(this + 0x18) + 0x10) = 0;
          (**(code **)(**(int **)(*(int *)(this + 0x18) + 0xc) + 0x20))
                    (param_1,*(int **)(*(int *)(this + 0x18) + 0xc),in_r1);
          this_00 = *(int **)(*(int *)(this + 0x18) + 0xc);
          if (*(char *)(*(int *)(this + 0x18) + 0x10) == '\0') {
            iVar1 = (**(code **)(*this_00 + 0x14))();
            param_1 = extraout_s0;
            if (iVar1 != 0) {
              (**(code **)(**(int **)(*(int *)(this + 0x18) + 0xc) + 0x1c))();
              *(undefined4 *)(*(int *)(this + 0x18) + 0xc) = 0;
              param_1 = (float)removeAction((CCAction *)this);
            }
          }
          else {
            param_1 = (float)CCObject::release((CCObject *)this_00);
          }
          *(undefined4 *)(*(int *)(this + 0x18) + 0xc) = 0;
        }
        *(int *)(*(int *)(this + 0x18) + 8) = *(int *)(*(int *)(this + 0x18) + 8) + 1;
      }
    }
    iVar3 = *(int *)(iVar3 + 0x1c);
    if ((this[0x1c] != (CCActionManager)0x0) && (***(int ***)(this + 0x18) == 0)) {
      param_1 = (float)deleteHashElement(this,(_hashElement *)*(int ***)(this + 0x18));
    }
  }
  return CONCAT44(in_r1,this);
}


