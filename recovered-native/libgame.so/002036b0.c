/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 002036b0  Symbol: __do_upcast */

/* WARNING: Removing unreachable block (ram,0x0020382c) */
/* WARNING: Removing unreachable block (ram,0x00203834) */
/* WARNING: Removing unreachable block (ram,0x0020387c) */
/* WARNING: Removing unreachable block (ram,0x00203884) */
/* WARNING: Removing unreachable block (ram,0x00203890) */
/* WARNING: Removing unreachable block (ram,0x00203808) */
/* WARNING: Removing unreachable block (ram,0x0020380c) */
/* WARNING: Removing unreachable block (ram,0x00203814) */
/* WARNING: Removing unreachable block (ram,0x002037ac) */
/* WARNING: Removing unreachable block (ram,0x002037b0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __cxxabiv1::__vmi_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*,
   __cxxabiv1::__class_type_info::__upcast_result&) const */

int __thiscall
__cxxabiv1::__vmi_class_type_info::__do_upcast
          (__vmi_class_type_info *this,__class_type_info *param_1,void *param_2,
          __upcast_result *param_3)

{
  int iVar1;
  int iVar2;
  __vmi_class_type_info *p_Var3;
  uint local_44;
  
  iVar1 = __class_type_info::__do_upcast((__class_type_info *)this,param_1,param_2,param_3);
  if (iVar1 == 0) {
    local_44 = *(uint *)(param_3 + 8);
    if ((local_44 & 0x10) != 0) {
      local_44 = *(uint *)(this + 8);
    }
    iVar1 = *(int *)(this + 0xc);
    p_Var3 = this + (iVar1 + 2) * 8;
    while (iVar1 != 0) {
      iVar1 = iVar1 + -1;
      if ((((*(uint *)(this + iVar1 * 8 + 0x14) & 2) != 0) || ((local_44 & 1) != 0)) &&
         (iVar2 = (**(code **)(**(int **)(p_Var3 + -8) + 0x18))(*(int **)(p_Var3 + -8),param_1),
         iVar2 != 0)) {
        if (*(int *)(param_3 + 0xc) == 0) {
          *(undefined4 *)param_3 = 0;
          *(undefined4 *)(param_3 + 4) = 0;
          *(uint *)(param_3 + 8) = local_44;
          *(undefined4 *)(param_3 + 0xc) = 0;
          goto LAB_00203840;
        }
        if (*(int *)param_3 != 0) {
          *(undefined4 *)param_3 = 0;
          *(undefined4 *)(param_3 + 4) = 2;
          return 1;
        }
        if ((*(int *)(param_3 + 0xc) == 8) || (iVar2 = FUN_00203530(), iVar2 == 0)) {
          *(undefined4 *)(param_3 + 4) = 2;
          return 1;
        }
        *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_3 + 4);
      }
      p_Var3 = p_Var3 + -8;
    }
    iVar1 = *(int *)(param_3 + 4);
    if (iVar1 != 0) {
      iVar1 = 1;
    }
  }
  else {
LAB_00203840:
    iVar1 = 1;
  }
  return iVar1;
}


