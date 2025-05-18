fn main() {
    let mut curr_dir = std::env::current_dir().expect("Error on getting curr dir");
    curr_dir.pop();
    let curr_dir = curr_dir.join("c");

    println!("cargo:rustc-link-search={}", curr_dir.display());
    println!("cargo:rustc-link-lib=cregister");

    let bindings = bindgen::Builder::default()
        .header("../c/lib/cregister.h")
        .parse_callbacks(Box::new(bindgen::CargoCallbacks::new()))
        .generate()
        .expect("Unable to generate bindings");

    let out_path = std::env::current_dir()
        .expect("Error on getting curr dir")
        .join("src")
        .join("bindings.rs");

    bindings
        .write_to_file(out_path)
        .expect("Could not write to file");
}
