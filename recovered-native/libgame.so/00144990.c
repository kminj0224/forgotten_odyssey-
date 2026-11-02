/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144990  Symbol: init */

/* cocos2d::CCDirector::init() */

undefined4 __thiscall cocos2d::CCDirector::init(CCDirector *this)

{
  int *this_00;
  void *pvVar1;
  undefined4 *puVar2;
  CCPoolManager *this_01;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = DAT_00144a2c;
  uVar3 = DAT_00144a28;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x18) = uVar3;
  *(undefined4 *)(this + 0x1c) = uVar5;
  *(undefined4 *)(this + 0x20) = uVar3;
  *(undefined4 *)(this + 0x24) = uVar5;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  this_00 = (int *)operator_new(0x20);
  CCObject::CCObject((CCObject *)this_00);
  iVar4 = DAT_00144a30;
  this_00[5] = 0;
  this_00[6] = 0;
  iVar4 = *(int *)(iVar4 + 0x1449be);
  this_00[7] = 0;
  *this_00 = iVar4 + 8;
  *(int **)(this + 0x50) = this_00;
  *(undefined4 *)(this + 0x60) = 1;
  *(undefined4 *)(this + 0x80) = 0;
  this[0x29] = (CCDirector)0x0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  pvVar1 = operator_new__(10);
  *(void **)(this + 0x78) = pvVar1;
  puVar2 = (undefined4 *)operator_new(8);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 **)(this + 0x54) = puVar2;
  this[0x38] = (CCDirector)0x0;
  iVar4 = DAT_00144a34;
  this[0x11] = (CCDirector)0x0;
  uVar3 = *(undefined4 *)(iVar4 + 0x1449f8);
  uVar5 = *(undefined4 *)(iVar4 + 0x1449fc);
  *(undefined4 *)(this + 100) = uVar3;
  *(undefined4 *)(this + 0x68) = uVar5;
  *(undefined4 *)(this + 0x70) = uVar5;
  *(undefined4 *)(this + 0x6c) = uVar3;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  this[0x89] = (CCDirector)0x0;
  *(undefined4 *)(this + 0x74) = 0x3f800000;
  this[0x88] = (CCDirector)0x0;
  this_01 = (CCPoolManager *)CCPoolManager::getInstance();
  CCPoolManager::push(this_01);
  return 1;
}


