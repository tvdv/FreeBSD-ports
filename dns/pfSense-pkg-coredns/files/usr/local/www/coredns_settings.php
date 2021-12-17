<?php
require("guiconfig.inc");
require("/usr/local/pkg/coredns/coredns.inc");


if (!is_array($config['installedpackages']['coredns']['config'])) {
	$config['installedpackages']['coredns']['config'] = array();
}
$a_coredns = &$config['installedpackages']['coredns']['config'][0];

/* TODO HANDLE INPUT POST */



$pgtitle = array(gettext("Services"), gettext("Coredns"));
include("head.inc");

if (isset($migration_warning)) {
	print_info_box($migration_warning);
}

if ($input_errors) {
	print_input_errors($input_errors);
}

$form = new Form;
$section = new Form_Section('General Settings');

$section->addInput(new Form_Checkbox(
	'enable',
	'Enable',
	'Enable the Coredns daemon',
	$pconfig['enable']
));

$form->add($section);

print($form);
?>


<script type="text/javascript">
//<![CDATA[
events.push(function() {
	var showadvanced = false;

	function publishingChange() {
		var hide = !$('#publishing').prop('checked')
		hideClass('publishing', hide);
	}

	// Initial page load
	publishingChange();
	checkLastRow();
});
//]]>
</script>

<?php include("foot.inc");
