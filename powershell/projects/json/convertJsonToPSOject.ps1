param(
        [string]$JsonFile
     )
    process{
        $objeto = cat $JsonFile | convertfrom-json
        $objeto
    }
