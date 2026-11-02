/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013edbe  Symbol: removeActionAtIndex */

/* cocos2d::CCActionManager::removeActionAtIndex(unsigned int, cocos2d::_hashElement*) */

undefined8 __thiscall
cocos2d::CCActionManager::removeActionAtIndex
          (CCActionManager *this,uint param_1,_hashElement *param_2)

{
  CCObject *this_00;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = param_1 * 4;
  this_00 = *(CCObject **)(*(int *)(*(int *)param_2 + 8) + iVar1);
  if ((this_00 == *(CCObject **)(param_2 + 0xc)) && (param_2[0x10] == (_hashElement)0x0)) {
    CCObject::retain(this_00);
    param_2[0x10] = (_hashElement)0x1;
  }
  piVar3 = *(int **)param_2;
  CCObject::release(*(CCObject **)(piVar3[2] + iVar1));
  iVar2 = *piVar3;
  *piVar3 = iVar2 + -1;
  iVar2 = (iVar2 + -1) - param_1;
  if (iVar2 != 0) {
    memmove((void *)(piVar3[2] + iVar1),(void *)(piVar3[2] + (param_1 + 1) * 4),iVar2 * 4);
  }
  if (param_1 <= *(uint *)(param_2 + 8)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) - 1;
  }
  if (**(int **)param_2 == 0) {
    if (*(_hashElement **)(this + 0x18) == param_2) {
      this[0x1c] = (CCActionManager)0x1;
    }
    else {
      deleteHashElement(this,param_2);
    }
  }
  return CONCAT44(iVar1,this);
}


