/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011cf58  Symbol: Get_Money */

/* New_Notice::Get_Money(int) */

undefined4 __thiscall New_Notice::Get_Money(New_Notice *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    uVar1 = *(undefined4 *)
             (*(int *)(DAT_0011cfbc + 0x11cf62) +
              *(int *)(**(int **)(DAT_0011cfc0 + 0x11cf6e) +
                       *(int *)(this + 0x118) * 0x14 + **(int **)(DAT_0011cfc4 + 0x11cf76) * 2000 +
                      DAT_0011cfc8) * 0x18 + 4);
  }
  else {
    if (param_1 == 1) {
      iVar2 = *(int *)(this + 0x11c);
    }
    else if (param_1 == 4) {
      iVar2 = *(int *)(this + 0x118) + 0x97;
    }
    else {
      iVar2 = *(int *)(*(int *)(this + 0x118) * 4 + *(int *)(DAT_0011cfcc + 0x11cfb0));
    }
    uVar1 = *(undefined4 *)(*(int *)(DAT_0011cfbc + 0x11cf62) + iVar2 * 0x18);
  }
  return uVar1;
}


