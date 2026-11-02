/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015cefe  Symbol: randomObject */

/* cocos2d::CCArray::randomObject() */

int __thiscall cocos2d::CCArray::randomObject(CCArray *this)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = **(int **)(this + 0x14);
  if (iVar4 != 0) {
    iVar5 = (*(int **)(this + 0x14))[2];
    lVar1 = lrand48();
    uVar2 = __floatunsisf(iVar4);
    uVar3 = __floatsisf(lVar1);
    uVar3 = __mulsf3(uVar3,0x30000000);
    __mulsf3(uVar2,uVar3);
    iVar4 = __fixsfsi();
    iVar4 = *(int *)(iVar4 * 4 + iVar5);
  }
  return iVar4;
}


