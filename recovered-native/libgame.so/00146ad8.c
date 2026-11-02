/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00146ad8  Symbol: CCKeypadDispatcher */

/* cocos2d::CCKeypadDispatcher::CCKeypadDispatcher() */

CCKeypadDispatcher * __thiscall
cocos2d::CCKeypadDispatcher::CCKeypadDispatcher(CCKeypadDispatcher *this)

{
  int *this_00;
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  
  CCObject::CCObject((CCObject *)this);
  iVar3 = DAT_00146b44;
  this[0x18] = (CCKeypadDispatcher)0x0;
  iVar3 = *(int *)(iVar3 + 0x146aea);
  this[0x19] = (CCKeypadDispatcher)0x0;
  this[0x1a] = (CCKeypadDispatcher)0x0;
  *(int *)this = iVar3 + 8;
  this_00 = (int *)operator_new(0x20);
  CCObject::CCObject((CCObject *)this_00);
  iVar3 = DAT_00146b48;
  this_00[5] = 0;
  this_00[6] = 0;
  iVar3 = *(int *)(iVar3 + 0x146b08);
  this_00[7] = 0;
  *this_00 = iVar3 + 8;
  *(int **)(this + 0x14) = this_00;
  puVar1 = (undefined4 *)malloc(0xc);
  *puVar1 = 0;
  pvVar2 = malloc(0x20);
  puVar1[1] = 8;
  puVar1[2] = pvVar2;
  *(undefined4 **)(this + 0x1c) = puVar1;
  puVar1 = (undefined4 *)malloc(0xc);
  *puVar1 = 0;
  pvVar2 = malloc(0x20);
  puVar1[2] = pvVar2;
  puVar1[1] = 8;
  *(undefined4 **)(this + 0x20) = puVar1;
  return this;
}


