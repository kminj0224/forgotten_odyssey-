/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012c88c  Symbol: ~LogoLayer */

/* LogoLayer::~LogoLayer() */

void __thiscall LogoLayer::~LogoLayer(LogoLayer *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_0012c8c8 + 0x12c896);
  *(int *)this = iVar2 + 8;
  *(int *)(this + 0xfc) = iVar2 + 0x13c;
  iVar1 = DAT_0012c8cc;
  *(int *)(this + 0x100) = iVar2 + 0x16c;
  *(int *)(this + 0x104) = iVar2 + 0x178;
                    /* WARNING: Subroutine does not return */
  cocos2d::CCLog((char *)(iVar1 + 0x12c8bc));
}


