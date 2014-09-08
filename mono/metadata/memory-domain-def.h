MEMDOM_TYPE_START(MonoImage)
MEMDOM_FIELD(MonoImage, mempool, MEMPOOL)
MEMDOM_FIELD(MonoImage, method_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, class_cache, INTERNAL_HASHTABLE)
MEMDOM_FIELD(MonoImage, methodref_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, field_cache, CONC_HASHTABLE)
MEMDOM_FIELD(MonoImage, typespec_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, memberref_signatures, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, helper_signatures, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, method_signatures, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, name_cache, NESTED_G_HASHTABLE)
MEMDOM_FIELD(MonoImage, array_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, ptr_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, szarray_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, delegate_begin_invoke_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, delegate_end_invoke_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, delegate_invoke_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, runtime_invoke_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, runtime_invoke_vtype_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, delegate_abstract_invoke_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, delegate_bound_static_invoke_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, runtime_invoke_direct_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, runtime_invoke_vcall_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, managed_wrapper_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, native_wrapper_aot_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, native_func_wrapper_aot_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, remoting_invoke_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, synchronized_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, unbox_wrapper_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, cominterop_invoke_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, cominterop_wrapper_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, thunk_invoke_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, wrapper_param_names, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, synchronized_generic_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, array_accessor_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, ldfld_wrapper_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, ldflda_wrapper_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, stfld_wrapper_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, isinst_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, castclass_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, proxy_isinst_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, rgctx_template_hash, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, delegate_invoke_generic_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, delegate_begin_invoke_generic_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, delegate_end_invoke_generic_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, property_hash, PROPERTY_HASHTABLE)
MEMDOM_FIELD(MonoImage, var_cache_slow, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, mvar_cache_slow, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, pinvoke_scopes, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, pinvoke_scope_filenames, G_HASHTABLE)
MEMDOM_FIELD(MonoImage, gsharedvt_types, G_HASHTABLE)
MEMDOM_TYPE_END()

MEMDOM_TYPE_START(MonoDomain)
MEMDOM_FIELD(MonoDomain, mp, MEMPOOL)
MEMDOM_FIELD(MonoDomain, env, MONO_HASHTABLE)
MEMDOM_FIELD(MonoDomain, ldstr_table, MONO_HASHTABLE)
MEMDOM_FIELD(MonoDomain, type_hash, MONO_HASHTABLE)
MEMDOM_FIELD(MonoDomain, refobject_hash, MONO_HASHTABLE)
MEMDOM_FIELD(MonoDomain, type_init_exception_hash, MONO_HASHTABLE)
MEMDOM_FIELD(MonoDomain, delegate_hash_table, MONO_HASHTABLE)
MEMDOM_FIELD(MonoDomain, proxy_vtable_hash, G_HASHTABLE)
MEMDOM_FIELD(MonoDomain, jit_code_hash, INTERNAL_HASHTABLE)
// MEMDOM_FIELD(MonoDomain, jit_info_table, JIT_INFO_TABLE)
// MEMDOM_FIELD(MonoDomain, aot_modules, G_HASHTABLE)
MEMDOM_FIELD(MonoDomain, special_static_fields, G_HASHTABLE)
MEMDOM_FIELD(MonoDomain, finalizable_objects_hash, G_HASHTABLE)
MEMDOM_FIELD(MonoDomain, method_rgctx_hash, G_HASHTABLE)
MEMDOM_FIELD(MonoDomain, generic_virtual_cases, G_HASHTABLE)
MEMDOM_FIELD(MonoDomain, generic_virtual_thunks, G_HASHTABLE)
MEMDOM_FIELD(MonoDomain, ftnptrs_hash, G_HASHTABLE)
MEMDOM_TYPE_END()

MEMDOM_TYPE_START(MonoImageSet)
MEMDOM_FIELD(MonoImageSet, gclass_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImageSet, ginst_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImageSet, gmethod_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImageSet, gsignature_cache, G_HASHTABLE)
MEMDOM_FIELD(MonoImageSet, mempool, MEMPOOL)
MEMDOM_TYPE_END()