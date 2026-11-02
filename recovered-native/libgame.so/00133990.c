/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00133990  Symbol: ~MainOption */

/* MainOption::~MainOption() */

MainOption * __thiscall MainOption::~MainOption(MainOption *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_001339c4 + 0x13399a);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


