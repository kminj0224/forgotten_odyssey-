/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c8204  Symbol: KG_getItemClassColor */

/* KG_getItemClassColor(int) */

uint KG_getItemClassColor(int param_1)

{
  undefined uVar1;
  uint3 local_4;
  
  uVar1 = 0xff;
  if (param_1 == 0) {
LAB_000c8236:
    local_4._0_2_ = 0xffff;
  }
  else {
    if (param_1 == 1) {
      local_4 = 0xff00;
      goto LAB_000c823c;
    }
    if (param_1 == 2) {
      local_4._0_2_ = 0xffff;
      uVar1 = 0;
    }
    else {
      if (param_1 != 3) goto LAB_000c8236;
      local_4._0_2_ = 0x3dbe;
    }
  }
  local_4 = CONCAT12(uVar1,(undefined2)local_4);
LAB_000c823c:
  return (uint)local_4;
}


